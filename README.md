# 4coder-haxe-lang
Syntax highlighting and support for the 4coder code editor.

## How to install
Simply copy the files `4coder_default_hooks.cpp` and `languages` folder into your local 4coder folder on your system, and run `buildsuper.bat` to generate a `custom_4coder.dll` file.

If you have an existing configuration and your own custom layer, don't replace `4coder_default_hooks.cpp` if you have adjusted it. Instead, open the file and navigate to the hook `OPEN_FILE_HOOK_SIG` and copy the following into its respective position:

```cpp
if (match(ext, "hx")){
    if (parse_context_language_haxe == 0){
        init_language_haxe(app);
    }
    parse_context_id = parse_context_language_haxe;
}
```

Don't forget to include the language file:

```cpp
#include "languages/4coder_language_haxe.h"
```

## Known Issues

 * Anonymous functions, or lambdas in general, are not currently supported in 4coder and causes some auto-indentation issues. Use these sparingly.
 * `case` and `default` statements will require open and close curly braces in order for auto-indenting to work properly, as 4coder expects `break;` in switch statements, which Haxe does not have.

## Building Projects
The best way to build haxe projects in 4coder is through `.bat` or `.sh` files. See the [YouTube Tutorial](https://www.youtube.com/watch?v=iZLtS3IoatE) on project management for more information on how to setup key bindings.

Here is a sample key-bindings `project.4coder` file for Haxe:

```
extensions=".hx.hxml.bat";

fkey_command_win[1] = {"..\\build-client.bat", "*compilation*", true};
fkey_command_win[2] = {"..\\build-server.bat", "*compilation*", true};
```

You may need to adjust your hxml or bat files for building. Currently, I am not aware of any way to better support a simple `haxe build.hxml` command as seen above, as for some reason it does not appear to function in 4coder.
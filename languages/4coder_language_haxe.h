/*
4coder_language_cs.h - Sets up the Haxe language context.

TYPE: 'language-description'
*/

// TOP

#if !defined(FCODER_LANGUAGE_HAXE_H)
#define FCODER_LANGUAGE_HAXE_H

static Parse_Context_ID parse_context_language_haxe;

#define PSAT(s, t) {s, sizeof(s)-1, t}
static void
init_language_haxe(Application_Links *app){
    if (parse_context_language_haxe != 0) return;
    
    Parser_String_And_Type kw[] = {
        PSAT("var", CPP_TOKEN_KEY_OTHER),
        PSAT("new", CPP_TOKEN_KEY_OTHER),
        PSAT("static", CPP_TOKEN_KEY_OTHER),
        PSAT("public", CPP_TOKEN_KEY_OTHER),
        PSAT("trace", CPP_TOKEN_KEY_OTHER),
        PSAT("null", CPP_TOKEN_KEY_OTHER),
        PSAT("private", CPP_TOKEN_KEY_OTHER),
        PSAT("this", CPP_TOKEN_KEY_OTHER),
        PSAT("extends", CPP_TOKEN_KEY_OTHER),
        PSAT("super", CPP_TOKEN_KEY_OTHER),
        PSAT("implements", CPP_TOKEN_KEY_OTHER),
        PSAT("never", CPP_TOKEN_KEY_OTHER),
        PSAT("true", CPP_TOKEN_KEY_OTHER),
        PSAT("false", CPP_TOKEN_KEY_OTHER),
        PSAT("in", CPP_TOKEN_KEY_OTHER),
        PSAT("abstract", CPP_TOKEN_KEY_OTHER),
        PSAT("inline", CPP_TOKEN_KEY_OTHER),
        PSAT("from", CPP_TOKEN_KEY_OTHER),
        PSAT("to", CPP_TOKEN_KEY_OTHER),
        PSAT("cast", CPP_TOKEN_KEY_OTHER),
        PSAT("dynamic", CPP_TOKEN_KEY_OTHER),
        PSAT("extern", CPP_TOKEN_KEY_OTHER),
        PSAT("import", CPP_TOKEN_KEY_OTHER),
        PSAT("macro", CPP_TOKEN_KEY_OTHER),
        PSAT("override", CPP_TOKEN_KEY_OTHER),
        PSAT("package", CPP_TOKEN_KEY_OTHER),
        PSAT("import", CPP_TOKEN_KEY_OTHER),
        PSAT("untyped", CPP_TOKEN_KEY_OTHER),
        PSAT("using", CPP_TOKEN_KEY_OTHER),
        
        PSAT("function", CPP_TOKEN_KEY_TYPE_DECLARATION),
        PSAT("class", CPP_TOKEN_KEY_TYPE_DECLARATION),
        PSAT("enum", CPP_TOKEN_KEY_TYPE_DECLARATION),
        PSAT("interface", CPP_TOKEN_KEY_TYPE_DECLARATION),
        PSAT("typedef", CPP_TOKEN_KEY_TYPE_DECLARATION),
        
        PSAT("if",      CPP_TOKEN_KEY_CONTROL_FLOW),
        PSAT("else",      CPP_TOKEN_KEY_CONTROL_FLOW),
        PSAT("break",      CPP_TOKEN_KEY_CONTROL_FLOW),
        PSAT("case",      CPP_TOKEN_KEY_CONTROL_FLOW),
        PSAT("catch",      CPP_TOKEN_KEY_CONTROL_FLOW),
        PSAT("continue",      CPP_TOKEN_KEY_CONTROL_FLOW),
        PSAT("default", CPP_TOKEN_KEY_CONTROL_FLOW),
        PSAT("do",      CPP_TOKEN_KEY_CONTROL_FLOW),
        PSAT("for",      CPP_TOKEN_KEY_CONTROL_FLOW),
        PSAT("return",      CPP_TOKEN_KEY_CONTROL_FLOW),
        PSAT("switch",      CPP_TOKEN_KEY_CONTROL_FLOW),
        PSAT("throw",      CPP_TOKEN_KEY_CONTROL_FLOW),
        PSAT("try",      CPP_TOKEN_KEY_CONTROL_FLOW),
        PSAT("throw",      CPP_TOKEN_KEY_CONTROL_FLOW),
        PSAT("while",      CPP_TOKEN_KEY_CONTROL_FLOW),
    };
    
    Parser_String_And_Type pp[] = {
        PSAT("if", CPP_PP_IF),
        PSAT("else", CPP_PP_ELSE),
        PSAT("elif", CPP_PP_ELIF),
        PSAT("end", CPP_PP_ENDIF),
    };
    
    parse_context_language_haxe = create_parse_context(app, kw, ArrayCount(kw), pp, ArrayCount(pp));
}
#undef PSAT

#endif

// BOTTOM
ident [a-zA-Z_][a-zA-Z0-9_]*
%{
#include "rust_expr.tab.h"
%}
%%
[ \n\t\r]             { }
box      { yylval.val = (Node *)malloc(sizeof(Node)); make_node(yylval.val, "BOX", 0); return BOX; }
break    { yylval.val = (Node *)malloc(sizeof(Node)); make_node(yylval.val, "BREAK", 0); return BREAK; }
continue { yylval.val = (Node *)malloc(sizeof(Node)); make_node(yylval.val, "CONTINUE", 0); return CONTINUE; }
false    { yylval.val = (Node *)malloc(sizeof(Node)); make_node(yylval.val, "FALSE", 0); return FALSE; }
return   { yylval.val = (Node *)malloc(sizeof(Node)); make_node(yylval.val, "RETURN", 0); return RETURN; }
true     { yylval.val = (Node *)malloc(sizeof(Node)); make_node(yylval.val, "TRUE", 0); return TRUE; }
yield    { yylval.val = (Node *)malloc(sizeof(Node)); make_node(yylval.val, "YIELD", 0); return YIELD; }

{ident}  { yylval.val = (Node *)malloc(sizeof(Node)); make_node(yylval.val, "IDENT", 0); return IDENT; }

0x[0-9a-fA-F_]+                                    { yylval.val = (Node *)malloc(sizeof(Node)); make_node(yylval.val, "LIT_INTEGER", 0); return LIT_INTEGER; }
0o[0-7_]+                                          { yylval.val = (Node *)malloc(sizeof(Node)); make_node(yylval.val, "LIT_INTEGER", 0); return LIT_INTEGER; }
0b[01_]+                                           { yylval.val = (Node *)malloc(sizeof(Node)); make_node(yylval.val, "LIT_INTEGER", 0); return LIT_INTEGER; }
[0-9][0-9_]*                                       { yylval.val = (Node *)malloc(sizeof(Node)); make_node(yylval.val, "LIT_INTEGER", 0); return LIT_INTEGER; }
[0-9][0-9_]*\.(\.|[a-zA-Z])    { yyless(yyleng - 2); yylval.val = (Node *)malloc(sizeof(Node)); make_node(yylval.val, "LIT_INTEGER", 0); return LIT_INTEGER; }

[0-9][0-9_]*\.[0-9_]*([eE][-\+]?[0-9_]+)?          { yylval.val = (Node *)malloc(sizeof(Node)); make_node(yylval.val, "LIT_FLOAT", 0); return LIT_FLOAT; }
[0-9][0-9_]*(\.[0-9_]*)?[eE][-\+]?[0-9_]+          { yylval.val = (Node *)malloc(sizeof(Node)); make_node(yylval.val, "LIT_FLOAT", 0); return LIT_FLOAT; }

;      { yylval.val = (Node *)malloc(sizeof(Node)); make_node(yylval.val, "';'", 0); return ';'; }
,      { yylval.val = (Node *)malloc(sizeof(Node)); make_node(yylval.val, "','", 0); return ','; }
\.\.   { yylval.val = (Node *)malloc(sizeof(Node)); make_node(yylval.val, "DOTDOT", 0); return DOTDOT; }
\.     { yylval.val = (Node *)malloc(sizeof(Node)); make_node(yylval.val, "'.'", 0); return '.'; }
\(     { yylval.val = (Node *)malloc(sizeof(Node)); make_node(yylval.val, "'('", 0); return '('; }
\)     { yylval.val = (Node *)malloc(sizeof(Node)); make_node(yylval.val, "')'", 0); return ')'; }
\[     { yylval.val = (Node *)malloc(sizeof(Node)); make_node(yylval.val, "'['", 0); return '['; }
\]     { yylval.val = (Node *)malloc(sizeof(Node)); make_node(yylval.val, "']'", 0); return ']'; }

\?     { yylval.val = (Node *)malloc(sizeof(Node)); make_node(yylval.val, "'?'", 0); return '?'; }

==    { yylval.val = (Node *)malloc(sizeof(Node)); make_node(yylval.val, "EQEQ", 0); return EQEQ; }
=     { yylval.val = (Node *)malloc(sizeof(Node)); make_node(yylval.val, "'='", 0); return '='; }
\!=   { yylval.val = (Node *)malloc(sizeof(Node)); make_node(yylval.val, "NE", 0); return NE; }
\<=   { yylval.val = (Node *)malloc(sizeof(Node)); make_node(yylval.val, "LE", 0); return LE; }
\<\<= { yylval.val = (Node *)malloc(sizeof(Node)); make_node(yylval.val, "SHLEQ", 0); return SHLEQ; }
\<\<  { yylval.val = (Node *)malloc(sizeof(Node)); make_node(yylval.val, "SHL", 0); return SHL; }
\<    { yylval.val = (Node *)malloc(sizeof(Node)); make_node(yylval.val, "'<'", 0); return '<'; }
\>=   { yylval.val = (Node *)malloc(sizeof(Node)); make_node(yylval.val, "GE", 0); return GE; }
\>\>= { yylval.val = (Node *)malloc(sizeof(Node)); make_node(yylval.val, "SHREQ", 0); return SHREQ; }
\>\>  { yylval.val = (Node *)malloc(sizeof(Node)); make_node(yylval.val, "SHR", 0); return SHR; }
\>    { yylval.val = (Node *)malloc(sizeof(Node)); make_node(yylval.val, "'>'", 0); return '>'; }

-=   { yylval.val = (Node *)malloc(sizeof(Node)); make_node(yylval.val, "MINUSEQ", 0); return MINUSEQ; }
-    { yylval.val = (Node *)malloc(sizeof(Node)); make_node(yylval.val, "'-'", 0); return '-'; }
&&   { yylval.val = (Node *)malloc(sizeof(Node)); make_node(yylval.val, "ANDAND", 0); return ANDAND; }
&    { yylval.val = (Node *)malloc(sizeof(Node)); make_node(yylval.val, "'&'", 0); return '&'; }
&=   { yylval.val = (Node *)malloc(sizeof(Node)); make_node(yylval.val, "ANDEQ", 0); return ANDEQ; }
\|\| { yylval.val = (Node *)malloc(sizeof(Node)); make_node(yylval.val, "OROR", 0); return OROR; }
\|=  { yylval.val = (Node *)malloc(sizeof(Node)); make_node(yylval.val, "OREQ", 0); return OREQ; }
\|   { yylval.val = (Node *)malloc(sizeof(Node)); make_node(yylval.val, "'|'", 0); return '|'; }
\+=  { yylval.val = (Node *)malloc(sizeof(Node)); make_node(yylval.val, "PLUSEQ", 0); return PLUSEQ; }
\+   { yylval.val = (Node *)malloc(sizeof(Node)); make_node(yylval.val, "'+'", 0); return '+'; }
\*=  { yylval.val = (Node *)malloc(sizeof(Node)); make_node(yylval.val, "STAREQ", 0); return STAREQ; }
\*   { yylval.val = (Node *)malloc(sizeof(Node)); make_node(yylval.val, "'*'", 0); return '*'; }
\/=  { yylval.val = (Node *)malloc(sizeof(Node)); make_node(yylval.val, "SLASHEQ", 0); return SLASHEQ; }
\/   { yylval.val = (Node *)malloc(sizeof(Node)); make_node(yylval.val, "'/'", 0); return '/'; }
\^=  { yylval.val = (Node *)malloc(sizeof(Node)); make_node(yylval.val, "CARETEQ", 0); return CARETEQ; }
\^   { yylval.val = (Node *)malloc(sizeof(Node)); make_node(yylval.val, "'^'", 0); return '^'; }
%=   { yylval.val = (Node *)malloc(sizeof(Node)); make_node(yylval.val, "PERCENTEQ", 0); return PERCENTEQ; }
%    { yylval.val = (Node *)malloc(sizeof(Node)); make_node(yylval.val, "'%'", 0); return '%'; }
%%

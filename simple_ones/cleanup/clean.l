%{

%}
punct	[,.;:!?]
text	[a-zA-Z]

%%

")"" "+/{punct}		{ printf(")"); } /* We remove any space after a ( followed by a "punct" character */
" "+			{ printf(" "); } /* Remove multiple spaces */
{text}" "+/{punct}	{ while (yytext[yyleng-1]==' ') yyleng--; ECHO; } /* Remove space before punctuation */

%%



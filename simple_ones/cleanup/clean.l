%{

%}
punct	[,.;:!?]
text	[a-zA-Z]

%%

")"" "+/{punct}		{ printf(")"); } /* We remove any space after a ( followed by a "punct" character */
" "+			{ printf(" "); } /* Remove multiple spaces */

%%



%{
	int charcount = 0;
	int linecount = 0;
	int wordcount = 0;
%}
letter	[^ \t\n]
%%
.			charcount++;
\n			{ linecount++; charcount++;}
{letter}+		{ wordcount++;charcount+=yyleng; }
%%

int main() {

	yylex();
	printf("Il y a %d caracteres, dans %d mots, sur %d lignes\n", charcount, wordcount, linecount);

	return 0;

}

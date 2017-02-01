# LexYaccExamples
This project is about learning how to use Lex and Yacc to do some nice stuff.

### simple_ones directory
This directory gathered very simple examples of programs using Lex.

## How to try it
Just run the "without extention" file.
Or, to understand the process :
* flex -t file.l > file.c
* cc -c -o file.o file.c
* cc -o file file.o -ll

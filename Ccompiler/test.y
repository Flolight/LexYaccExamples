%{
#include <studio.h>
%}

%token tInt tCons tId tNb tId tPo tPf tVg tPv tAo tAf tIf tElse
%start Prog

%%

Prog      : Fonctions
Fonctions : /* epsilon */
	   |Fonction Fonctions
Fonction  : tInt tId tPo Args tPf Body

Args      : /* epsilon */
	   |tInt tId ArgsN
ArgsN     : /* epsilon */
	   | tVg tInt tId ArgsN
Body      : tAo Instrs tAf
Instrs    : /* epsilon */
	   |/*Aff */ tPv Instrs
           |If Instrs
           |          

If        : tIf tPo tPf Body Else
Else      : /* epsilon */
	   |tElse Body
E         : tId

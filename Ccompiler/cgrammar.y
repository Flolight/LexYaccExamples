%{
#include <stdio.h>
%}

%token tInt tCons tId tNb tVg tPv tPo tPf tAo tAf tIf tElse tWhile tEqu tEquEqu tAnd tOr tPlus tMoins tInf tSup
%start Prog

%%

Prog       : Fonctions
Fonctions  : /* epsilon  */
	    | Fonction Fonctions
Fonction   : tInt tId tPo Args tPf Body
Args       : /* epsilon */
	    | tInt tId ArgsN
ArgsN      : /* epsilon */
	    | tVg tInt tId ArgsN
Body       : tAo Instrs tAf
Instrs     : /* epsilon */
	    |Aff tPv Instrs
            |Decl tPv Instrs
            |Invoc tPv Instrs
            |If Instrs
            |While Instrs
If         : tIf tPo E tPf Body Else
Else       : /* epsilon */
	    |tElse Body
E          : tId
	    |tNb
            |E tEquEqu E
            |E tAnd E
            |E tOr E
            |Invoc
            |tPo E tPf
            |E tPlus E
            |E tMoins E
            |E tInf E
            |E tSup E
While      : tWhile tPo E tPf Body
Aff        : tId tEqu E
Invoc      : tId tPo Params tPf
Params     : /* epsilon */
	    |E ParamsN
ParamsN    : /* epsilon */
	    | tVg E ParamsN
Decl       :tInt Decl1 DeclN
Decl1      : tId
	    |tId tEqu E
DeclN       : /* epsilon */
	    |tVg Decl1 DeclN


%{
#include <stdio.h>
%}

%token tInt tId tVg tPv tPo tPf tAo tAf tIf tElse tWhile tEqu tEquEqu tAnd tOr tPlus tMoins
%start Prog

%%

Prog       : Fonctions
Fonctions   : /* epsilon  */
	    |Fonction Fonctions
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
If         : tIf tPo E tPf Body tElse
Else       : /* epsilon */
	    |tElse Body
E          : tId
	    |tInt
            |E tEquEqu E
            |E tAnd E
            |E tOr E
            |Invoc
            |tPo E tPf
            |E tPlus E
            |E tMoins E
While      : tWhile tPo E tPf Body
Aff        : tId tEqu E
Invoc      : tId tPo Params tPf
Params     : /* epsilon */
	    |E ParamsN
ParamsN    : tVg E ParamsN
Decl1      : tId
	    |tId tEqu E
Decl       :tInt Decl1 DeclN
DeclN      : /* epsilon */
	    |tVg Decl1 DeclN


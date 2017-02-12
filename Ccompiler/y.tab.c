#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20140101

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)

#define YYPREFIX "yy"

#define YYPURE 0

#line 1 "cgrammar.y"

#include <stdio.h>
#line 22 "y.tab.c"

#ifndef YYSTYPE
typedef int YYSTYPE;
#endif

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define tInt 257
#define tId 258
#define tVg 259
#define tPv 260
#define tPo 261
#define tPf 262
#define tAo 263
#define tAf 264
#define tIf 265
#define tElse 266
#define tWhile 267
#define tEqu 268
#define tEquEqu 269
#define tAnd 270
#define tOr 271
#define tPlus 272
#define tMoins 273
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    1,    1,    2,    3,    3,    5,    5,    4,    6,
    6,    6,    6,    6,    6,   10,   13,   13,   12,   12,
   12,   12,   12,   12,   12,   12,   12,   11,    7,    9,
   14,   14,   15,   16,   16,    8,   17,   17,
};
static const short yylen[] = {                            2,
    1,    0,    2,    6,    0,    3,    0,    4,    3,    0,
    3,    3,    3,    2,    2,    6,    0,    2,    1,    1,
    3,    3,    3,    1,    3,    3,    3,    5,    3,    4,
    0,    2,    3,    1,    3,    3,    0,    3,
};
static const short yydefred[] = {                         0,
    0,    0,    1,    0,    0,    3,    0,    0,    0,    0,
    0,    0,    6,    0,    4,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    9,    0,    0,    0,   14,   15,    8,
    0,    0,   36,   20,    0,    0,   24,    0,    0,    0,
    0,    0,   11,   12,   13,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   32,   30,    0,    0,   38,   25,
    0,    0,    0,    0,    0,    0,    0,   28,   33,   16,
};
static const short yydgoto[] = {                          2,
    3,    4,    9,   15,   13,   21,   22,   23,   47,   25,
   26,   48,    0,   49,   65,   29,   43,
};
static const short yysindex[] = {                      -252,
 -250,    0,    0, -252, -247,    0, -231, -212, -219, -197,
 -182, -160,    0, -194,    0, -173, -169, -196, -159, -158,
 -171, -156, -155, -154, -194, -194, -197, -167, -152, -213,
 -213, -213, -213,    0, -194, -194, -194,    0,    0,    0,
 -213, -169,    0,    0, -153, -213,    0, -232, -151, -195,
 -220, -215,    0,    0,    0, -195, -152, -203, -213, -213,
 -213, -213, -213, -213,    0,    0, -182, -182,    0,    0,
 -232, -195, -195, -195, -195, -195, -157,    0,    0,    0,
};
static const short yyrindex[] = {                       110,
    0,    0,    0,  110,    0,    0, -150,    0,    0, -149,
    0,    0,    0, -148,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0, -148, -148, -149, -256, -154, -147,
    0,    0,    0,    0, -148, -148, -148,    0,    0,    0,
    0,    0,    0,    0, -253,    0,    0,    0,    0, -146,
    0,    0,    0,    0,    0, -199, -154,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -180, -176, -172, -168, -164,    0,    0,    0,    0,
};
static const short yygindex[] = {                         0,
  113,    0,    0,   32,   91,  -14,    0,    0,   -1,    0,
    0,  -31,    0,    0,   48,   78,   64,
};
#define YYTABLESIZE 121
static const short yytable[] = {                         50,
   51,   52,   34,   34,    1,   19,   19,    5,   19,   56,
   38,   39,   24,    7,   58,   19,   19,   19,   19,   19,
   53,   54,   55,   24,   24,    8,   59,   71,   72,   73,
   74,   75,   76,   24,   24,   24,   60,   61,   62,   63,
   64,   67,   11,   44,   45,   10,   68,   46,   60,   61,
   62,   63,   64,   60,   61,   62,   63,   64,   70,   35,
   35,   12,   17,   18,   30,   60,   61,   62,   63,   64,
   19,   31,   20,   60,   61,   62,   63,   64,   21,   21,
   14,   21,   22,   22,   27,   22,   23,   23,   28,   23,
   26,   26,   34,   26,   27,   27,   16,   27,   77,   78,
   41,   32,   33,   35,   36,   37,   42,   30,   80,    2,
   66,    5,    7,   29,   31,   10,    6,   40,   79,   57,
   69,
};
static const short yycheck[] = {                         31,
   32,   33,  259,  260,  257,  259,  260,  258,  262,   41,
   25,   26,   14,  261,   46,  269,  270,  271,  272,  273,
   35,   36,   37,   25,   26,  257,  259,   59,   60,   61,
   62,   63,   64,   35,   36,   37,  269,  270,  271,  272,
  273,  262,  262,  257,  258,  258,  262,  261,  269,  270,
  271,  272,  273,  269,  270,  271,  272,  273,  262,  259,
  260,  259,  257,  258,  261,  269,  270,  271,  272,  273,
  265,  268,  267,  269,  270,  271,  272,  273,  259,  260,
  263,  262,  259,  260,  258,  262,  259,  260,  258,  262,
  259,  260,  264,  262,  259,  260,  257,  262,   67,   68,
  268,  261,  261,  260,  260,  260,  259,  261,  266,    0,
  262,  262,  262,  260,  262,  264,    4,   27,   71,   42,
   57,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 273
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? (YYMAXTOKEN + 1) : (a))
#if YYDEBUG
static const char *yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"tInt","tId","tVg","tPv","tPo",
"tPf","tAo","tAf","tIf","tElse","tWhile","tEqu","tEquEqu","tAnd","tOr","tPlus",
"tMoins","illegal-symbol",
};
static const char *yyrule[] = {
"$accept : Prog",
"Prog : Fonctions",
"Fonctions :",
"Fonctions : Fonction Fonctions",
"Fonction : tInt tId tPo Args tPf Body",
"Args :",
"Args : tInt tId ArgsN",
"ArgsN :",
"ArgsN : tVg tInt tId ArgsN",
"Body : tAo Instrs tAf",
"Instrs :",
"Instrs : Aff tPv Instrs",
"Instrs : Decl tPv Instrs",
"Instrs : Invoc tPv Instrs",
"Instrs : If Instrs",
"Instrs : While Instrs",
"If : tIf tPo E tPf Body tElse",
"Else :",
"Else : tElse Body",
"E : tId",
"E : tInt",
"E : E tEquEqu E",
"E : E tAnd E",
"E : E tOr E",
"E : Invoc",
"E : tPo E tPf",
"E : E tPlus E",
"E : E tMoins E",
"While : tWhile tPo E tPf Body",
"Aff : tId tEqu E",
"Invoc : tId tPo Params tPf",
"Params :",
"Params : E ParamsN",
"ParamsN : tVg E ParamsN",
"Decl1 : tId",
"Decl1 : tId tEqu E",
"Decl : tInt Decl1 DeclN",
"DeclN :",
"DeclN : tVg Decl1 DeclN",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    short    *s_base;
    short    *s_mark;
    short    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (short *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return -1;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return -1;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack)) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    yyerror("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = yyname[YYTRANSLATE(yychar)];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (short) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    yyerror("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}

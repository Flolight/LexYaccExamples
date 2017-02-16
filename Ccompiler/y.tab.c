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
#define tCons 258
#define tId 259
#define tNb 260
#define tVg 261
#define tPv 262
#define tPo 263
#define tPf 264
#define tAo 265
#define tAf 266
#define tIf 267
#define tElse 268
#define tWhile 269
#define tEqu 270
#define tEquEqu 271
#define tAnd 272
#define tOr 273
#define tPlus 274
#define tMoins 275
#define tInf 276
#define tSup 277
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    1,    1,    2,    3,    3,    5,    5,    4,    6,
    6,    6,    6,    6,    6,   10,   13,   13,   12,   12,
   12,   12,   12,   12,   12,   12,   12,   12,   12,   11,
    7,    9,   14,   14,   15,   15,    8,   16,   16,   17,
   17,
};
static const short yylen[] = {                            2,
    1,    0,    2,    6,    0,    3,    0,    4,    3,    0,
    3,    3,    3,    2,    2,    6,    0,    2,    1,    1,
    3,    3,    3,    1,    3,    3,    3,    3,    3,    5,
    3,    4,    0,    2,    0,    3,    3,    1,    3,    0,
    3,
};
static const short yydefred[] = {                         0,
    0,    0,    1,    0,    0,    3,    0,    0,    0,    0,
    0,    0,    6,    0,    4,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    9,    0,    0,    0,   14,   15,    8,
    0,    0,   37,    0,   20,    0,   24,    0,    0,    0,
    0,    0,   11,   12,   13,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   34,   32,    0,    0,
   41,   25,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   30,   36,    0,   16,   18,
};
static const short yydgoto[] = {                          2,
    3,    4,    9,   15,   13,   21,   22,   23,   47,   25,
   26,   48,   85,   49,   67,   29,   43,
};
static const short yysindex[] = {                      -252,
 -251,    0,    0, -252, -219,    0, -215, -200, -190, -186,
 -189, -170,    0, -158,    0, -169, -156, -225, -174, -161,
 -162, -150, -149, -139, -158, -158, -186, -165, -155, -236,
 -236, -236, -236,    0, -158, -158, -158,    0,    0,    0,
 -236, -156,    0, -126,    0, -236,    0, -222, -137, -157,
 -208, -194,    0,    0,    0, -157, -155, -180, -236, -236,
 -236, -236, -236, -236, -236, -236,    0,    0, -189, -189,
    0,    0, -222, -157, -157, -157, -157, -157, -157, -157,
 -133,    0,    0, -189,    0,    0,
};
static const short yyrindex[] = {                       131,
    0,    0,    0,  131,    0,    0, -125,    0,    0, -124,
    0,    0,    0, -123,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0, -123, -123, -124, -258, -121, -122,
    0,    0,    0,    0, -123, -123, -123,    0,    0,    0,
    0,    0,    0, -255,    0,    0,    0, -120,    0, -117,
    0,    0,    0,    0,    0, -248, -121,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0, -120, -221, -204, -176, -140, -136, -132, -128,
 -159,    0,    0,    0,    0,    0,
};
static const short yygindex[] = {                         0,
  134,    0,    0,  -58,  119,   36,    0,    0,   11,    0,
    0,  -31,    0,    0,   74,  106,   92,
};
#define YYTABLESIZE 149
static const short yytable[] = {                         50,
   51,   52,   38,   38,    1,   19,   19,    5,   19,   56,
   81,   82,   39,   39,   58,   19,   19,   19,   19,   19,
   19,   19,   44,   45,   24,   86,   46,   73,   74,   75,
   76,   77,   78,   79,   80,   24,   24,   30,   59,   21,
   21,    8,   21,    7,   31,   24,   24,   24,   60,   61,
   62,   63,   64,   65,   66,   69,   22,   22,   10,   22,
   38,   39,   60,   61,   62,   63,   64,   65,   66,   70,
   53,   54,   55,   11,   12,   14,   60,   61,   62,   63,
   64,   65,   66,   72,   23,   23,   16,   23,   32,   27,
   60,   61,   62,   63,   64,   65,   66,   17,   17,   17,
   18,   33,   28,   34,   41,   42,   17,   17,   19,   17,
   20,   35,   36,   60,   61,   62,   63,   64,   65,   66,
   26,   26,   37,   26,   27,   27,   68,   27,   28,   28,
    2,   28,   29,   29,   84,   29,   30,    6,    5,    7,
   40,   33,   10,   35,   31,   40,   83,   57,   71,
};
static const short yycheck[] = {                         31,
   32,   33,  261,  262,  257,  261,  262,  259,  264,   41,
   69,   70,  261,  262,   46,  271,  272,  273,  274,  275,
  276,  277,  259,  260,   14,   84,  263,   59,   60,   61,
   62,   63,   64,   65,   66,   25,   26,  263,  261,  261,
  262,  257,  264,  263,  270,   35,   36,   37,  271,  272,
  273,  274,  275,  276,  277,  264,  261,  262,  259,  264,
   25,   26,  271,  272,  273,  274,  275,  276,  277,  264,
   35,   36,   37,  264,  261,  265,  271,  272,  273,  274,
  275,  276,  277,  264,  261,  262,  257,  264,  263,  259,
  271,  272,  273,  274,  275,  276,  277,  257,  257,  259,
  259,  263,  259,  266,  270,  261,  266,  267,  267,  269,
  269,  262,  262,  271,  272,  273,  274,  275,  276,  277,
  261,  262,  262,  264,  261,  262,  264,  264,  261,  262,
    0,  264,  261,  262,  268,  264,  263,    4,  264,  264,
  262,  264,  266,  264,  262,   27,   73,   42,   57,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 277
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? (YYMAXTOKEN + 1) : (a))
#if YYDEBUG
static const char *yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"tInt","tCons","tId","tNb","tVg",
"tPv","tPo","tPf","tAo","tAf","tIf","tElse","tWhile","tEqu","tEquEqu","tAnd",
"tOr","tPlus","tMoins","tInf","tSup","illegal-symbol",
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
"If : tIf tPo E tPf Body Else",
"Else :",
"Else : tElse Body",
"E : tId",
"E : tNb",
"E : E tEquEqu E",
"E : E tAnd E",
"E : E tOr E",
"E : Invoc",
"E : tPo E tPf",
"E : E tPlus E",
"E : E tMoins E",
"E : E tInf E",
"E : E tSup E",
"While : tWhile tPo E tPf Body",
"Aff : tId tEqu E",
"Invoc : tId tPo Params tPf",
"Params :",
"Params : E ParamsN",
"ParamsN :",
"ParamsN : tVg E ParamsN",
"Decl : tInt Decl1 DeclN",
"Decl1 : tId",
"Decl1 : tId tEqu E",
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

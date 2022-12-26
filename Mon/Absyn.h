/* File generated by the BNF Converter (bnfc 2.9.4). */

#ifndef ABSYN_HEADER
#define ABSYN_HEADER

/* strdup was not in the ISO C standard before 6/2019 (C2x), but in POSIX 1003.1.
 * See: https://en.cppreference.com/w/c/experimental/dynamic/strdup
 * Setting _POSIX_C_SOURCE to 200809L activates strdup in string.h.
 */
#define _POSIX_C_SOURCE 200809L

#include <stddef.h>  /* NULL */
#include <string.h>  /* strdup */

/* C++ Abstract Syntax Interface.*/

/********************   TypeDef Section    ********************/

typedef int Integer;
typedef char Char;
typedef double Double;
typedef char* String;
typedef char* Ident;

/********************   Forward Declarations    ***********************/
struct Progr_;
typedef struct Progr_ *Progr;

struct BlocoDec_;
typedef struct BlocoDec_ *BlocoDec;

struct BlocoConstante_;
typedef struct BlocoConstante_ *BlocoConstante;

struct RegraConstante_;
typedef struct RegraConstante_ *RegraConstante;

struct RegraDec_;
typedef struct RegraDec_ *RegraDec;

struct BlocoVar_;
typedef struct BlocoVar_ *BlocoVar;

struct RegraDecVar_;
typedef struct RegraDecVar_ *RegraDecVar;

struct BlocoType_;
typedef struct BlocoType_ *BlocoType;

struct RegraType_;
typedef struct RegraType_ *RegraType;

struct RegraDecVetor_;
typedef struct RegraDecVetor_ *RegraDecVetor;

struct RegraDecStruct_;
typedef struct RegraDecStruct_ *RegraDecStruct;

struct BlocoStmt_;
typedef struct BlocoStmt_ *BlocoStmt;

struct RegraStmt_;
typedef struct RegraStmt_ *RegraStmt;

struct Stmt_;
typedef struct Stmt_ *Stmt;

struct Atribuicao_;
typedef struct Atribuicao_ *Atribuicao;

struct AtribuicaoVetor_;
typedef struct AtribuicaoVetor_ *AtribuicaoVetor;

struct AtribuicaoStruct_;
typedef struct AtribuicaoStruct_ *AtribuicaoStruct;

struct Valor_;
typedef struct Valor_ *Valor;

struct RExpr_;
typedef struct RExpr_ *RExpr;

struct Opa_;
typedef struct Opa_ *Opa;

struct ExpressaoLogica_;
typedef struct ExpressaoLogica_ *ExpressaoLogica;

struct If_;
typedef struct If_ *If;

struct IfStmt_;
typedef struct IfStmt_ *IfStmt;

struct ElseStmt_;
typedef struct ElseStmt_ *ElseStmt;

struct ElsIfStmt_;
typedef struct ElsIfStmt_ *ElsIfStmt;

struct While_;
typedef struct While_ *While;

struct For_;
typedef struct For_ *For;

struct Case_;
typedef struct Case_ *Case;

struct CaseStmt_;
typedef struct CaseStmt_ *CaseStmt;

struct Type_;
typedef struct Type_ *Type;

struct OperadoresLogicos_;
typedef struct OperadoresLogicos_ *OperadoresLogicos;

struct ConectivosLogicos_;
typedef struct ConectivosLogicos_ *ConectivosLogicos;

/********************   Abstract Syntax Classes    ********************/

struct Progr_
{
  enum { is_Program } kind;
  union
  {
    struct { BlocoDec blocodec_; Ident ident_1, ident_2; RegraStmt regrastmt_; } program_;
  } u;
};

Progr make_Program(Ident p0, BlocoDec p1, RegraStmt p2, Ident p3);

struct BlocoDec_
{
  enum { is_BlocoDec1, is_BlocoDec2, is_BlocoDec3, is_BlocoDec_ } kind;
  union
  {
    struct { BlocoConstante blococonstante_; BlocoDec blocodec_; } blocodec1_;
    struct { BlocoDec blocodec_; BlocoVar blocovar_; } blocodec2_;
    struct { BlocoDec blocodec_; BlocoType blocotype_; } blocodec3_;
  } u;
};

BlocoDec make_BlocoDec1(BlocoConstante p0, BlocoDec p1);
BlocoDec make_BlocoDec2(BlocoVar p0, BlocoDec p1);
BlocoDec make_BlocoDec3(BlocoType p0, BlocoDec p1);
BlocoDec make_BlocoDec_(void);

struct BlocoConstante_
{
  enum { is_BlocoConstante1 } kind;
  union
  {
    struct { RegraConstante regraconstante_; } blococonstante1_;
  } u;
};

BlocoConstante make_BlocoConstante1(RegraConstante p0);

struct RegraConstante_
{
  enum { is_RegraConstante1, is_RegraConstante2 } kind;
  union
  {
    struct { Ident ident_; Type type_; Valor valor_; } regraconstante1_;
    struct { Ident ident_; RegraConstante regraconstante_; Type type_; Valor valor_; } regraconstante2_;
  } u;
};

RegraConstante make_RegraConstante1(Ident p0, Type p1, Valor p2);
RegraConstante make_RegraConstante2(Ident p0, Type p1, Valor p2, RegraConstante p3);

struct RegraDec_
{
  enum { is_RegraDec1, is_RegraDec2 } kind;
  union
  {
    struct { Ident ident_; Type type_; } regradec1_;
    struct { Ident ident_; RegraDec regradec_; Type type_; } regradec2_;
  } u;
};

RegraDec make_RegraDec1(Ident p0, Type p1);
RegraDec make_RegraDec2(Ident p0, Type p1, RegraDec p2);

struct BlocoVar_
{
  enum { is_BlocoVar1 } kind;
  union
  {
    struct { RegraDecVar regradecvar_; } blocovar1_;
  } u;
};

BlocoVar make_BlocoVar1(RegraDecVar p0);

struct RegraDecVar_
{
  enum { is_RegraDecVar1, is_RegraDecVar2 } kind;
  union
  {
    struct { RegraDec regradec_; } regradecvar1_;
    struct { RegraDec regradec_; RegraDecVar regradecvar_; } regradecvar2_;
  } u;
};

RegraDecVar make_RegraDecVar1(RegraDec p0);
RegraDecVar make_RegraDecVar2(RegraDec p0, RegraDecVar p1);

struct BlocoType_
{
  enum { is_BlocoType1 } kind;
  union
  {
    struct { RegraType regratype_; } blocotype1_;
  } u;
};

BlocoType make_BlocoType1(RegraType p0);

struct RegraType_
{
  enum { is_RegraTypeRegraDecVetor, is_RegraType1, is_RegraTypeRegraDecStruct, is_RegraType2 } kind;
  union
  {
    struct { RegraDecVetor regradecvetor_; } regratyperegradecvetor_;
    struct { RegraDecVetor regradecvetor_; RegraType regratype_; } regratype1_;
    struct { RegraDecStruct regradecstruct_; } regratyperegradecstruct_;
    struct { RegraDecStruct regradecstruct_; RegraType regratype_; } regratype2_;
  } u;
};

RegraType make_RegraTypeRegraDecVetor(RegraDecVetor p0);
RegraType make_RegraType1(RegraDecVetor p0, RegraType p1);
RegraType make_RegraTypeRegraDecStruct(RegraDecStruct p0);
RegraType make_RegraType2(RegraDecStruct p0, RegraType p1);

struct RegraDecVetor_
{
  enum { is_RegraDecVetor1 } kind;
  union
  {
    struct { Ident ident_; Integer integer_; Type type_; } regradecvetor1_;
  } u;
};

RegraDecVetor make_RegraDecVetor1(Ident p0, Integer p1, Type p2);

struct RegraDecStruct_
{
  enum { is_RegraDecStruct1, is_RegraDecStruct2 } kind;
  union
  {
    struct { Ident ident_; RegraDec regradec_; } regradecstruct1_;
    struct { Ident ident_; RegraDec regradec_; RegraDecStruct regradecstruct_; } regradecstruct2_;
  } u;
};

RegraDecStruct make_RegraDecStruct1(Ident p0, RegraDec p1);
RegraDecStruct make_RegraDecStruct2(Ident p0, RegraDec p1, RegraDecStruct p2);

struct BlocoStmt_
{
  enum { is_BlocoStmt1 } kind;
  union
  {
    struct { RegraStmt regrastmt_; } blocostmt1_;
  } u;
};

BlocoStmt make_BlocoStmt1(RegraStmt p0);

struct RegraStmt_
{
  enum { is_RegraStmtStmt, is_RegraStmt1, is_RegraStmt_ } kind;
  union
  {
    struct { Stmt stmt_; } regrastmtstmt_;
    struct { RegraStmt regrastmt_; Stmt stmt_; } regrastmt1_;
  } u;
};

RegraStmt make_RegraStmtStmt(Stmt p0);
RegraStmt make_RegraStmt1(Stmt p0, RegraStmt p1);
RegraStmt make_RegraStmt_(void);

struct Stmt_
{
  enum { is_Stmt1, is_Stmt2, is_Stmt3, is_Stmt4, is_Stmt5, is_Stmt6 } kind;
  union
  {
    struct { Atribuicao atribuicao_; } stmt1_;
    struct { Opa opa_; } stmt2_;
    struct { If if_; } stmt3_;
    struct { While while_; } stmt4_;
    struct { For for_; } stmt5_;
    struct { Case case_; } stmt6_;
  } u;
};

Stmt make_Stmt1(Atribuicao p0);
Stmt make_Stmt2(Opa p0);
Stmt make_Stmt3(If p0);
Stmt make_Stmt4(While p0);
Stmt make_Stmt5(For p0);
Stmt make_Stmt6(Case p0);

struct Atribuicao_
{
  enum { is_Atribuicao1, is_AtribuicaoAtribuicaoVetor, is_AtribuicaoAtribuicaoStruct } kind;
  union
  {
    struct { Ident ident_; RExpr rexpr_; } atribuicao1_;
    struct { AtribuicaoVetor atribuicaovetor_; } atribuicaoatribuicaovetor_;
    struct { AtribuicaoStruct atribuicaostruct_; } atribuicaoatribuicaostruct_;
  } u;
};

Atribuicao make_Atribuicao1(Ident p0, RExpr p1);
Atribuicao make_AtribuicaoAtribuicaoVetor(AtribuicaoVetor p0);
Atribuicao make_AtribuicaoAtribuicaoStruct(AtribuicaoStruct p0);

struct AtribuicaoVetor_
{
  enum { is_AtribuicaoVetor1, is_AtribuicaoVetor2 } kind;
  union
  {
    struct { Ident ident_; Integer integer_; Valor valor_; } atribuicaovetor1_;
    struct { Ident ident_1, ident_2; Integer integer_; } atribuicaovetor2_;
  } u;
};

AtribuicaoVetor make_AtribuicaoVetor1(Ident p0, Integer p1, Valor p2);
AtribuicaoVetor make_AtribuicaoVetor2(Ident p0, Integer p1, Ident p2);

struct AtribuicaoStruct_
{
  enum { is_AtribuicaoStruct1, is_AtribuicaoStruct2 } kind;
  union
  {
    struct { Ident ident_1, ident_2; Valor valor_; } atribuicaostruct1_;
    struct { Ident ident_1, ident_2, ident_3; } atribuicaostruct2_;
  } u;
};

AtribuicaoStruct make_AtribuicaoStruct1(Ident p0, Ident p1, Valor p2);
AtribuicaoStruct make_AtribuicaoStruct2(Ident p0, Ident p1, Ident p2);

struct Valor_
{
  enum { is_ValorString, is_ValorChar, is_ValorDouble, is_ValorInteger } kind;
  union
  {
    struct { String string_; } valorstring_;
    struct { Char char_; } valorchar_;
    struct { Double double_; } valordouble_;
    struct { Integer integer_; } valorinteger_;
  } u;
};

Valor make_ValorString(String p0);
Valor make_ValorChar(Char p0);
Valor make_ValorDouble(Double p0);
Valor make_ValorInteger(Integer p0);

struct RExpr_
{
  enum { is_RExprValor, is_RExprIdent, is_RExprOpa } kind;
  union
  {
    struct { Valor valor_; } rexprvalor_;
    struct { Ident ident_; } rexprident_;
    struct { Opa opa_; } rexpropa_;
  } u;
};

RExpr make_RExprValor(Valor p0);
RExpr make_RExprIdent(Ident p0);
RExpr make_RExprOpa(Opa p0);

struct Opa_
{
  enum { is_LSom, is_LSub, is_LMul, is_LDiv, is_Opa2Integer, is_Opa2Double, is_Opa2Ident } kind;
  union
  {
    struct { Opa opa_1, opa_2; } lsom_;
    struct { Opa opa_1, opa_2; } lsub_;
    struct { Opa opa_1, opa_2; } lmul_;
    struct { Opa opa_1, opa_2; } ldiv_;
    struct { Integer integer_; } opa2integer_;
    struct { Double double_; } opa2double_;
    struct { Ident ident_; } opa2ident_;
  } u;
};

Opa make_LSom(Opa p0, Opa p1);
Opa make_LSub(Opa p0, Opa p1);
Opa make_LMul(Opa p0, Opa p1);
Opa make_LDiv(Opa p0, Opa p1);
Opa make_Opa2Integer(Integer p0);
Opa make_Opa2Double(Double p0);
Opa make_Opa2Ident(Ident p0);

struct ExpressaoLogica_
{
  enum { is_ExpressaoLogica1, is_ExpressaoLogica2 } kind;
  union
  {
    struct { OperadoresLogicos operadoreslogicos_; RExpr rexpr_1, rexpr_2; } expressaologica1_;
    struct { ConectivosLogicos conectivoslogicos_; ExpressaoLogica expressaologica_; OperadoresLogicos operadoreslogicos_; RExpr rexpr_1, rexpr_2; } expressaologica2_;
  } u;
};

ExpressaoLogica make_ExpressaoLogica1(RExpr p0, OperadoresLogicos p1, RExpr p2);
ExpressaoLogica make_ExpressaoLogica2(RExpr p0, OperadoresLogicos p1, RExpr p2, ConectivosLogicos p3, ExpressaoLogica p4);

struct If_
{
  enum { is_IfIfStmt, is_If1, is_If2, is_If_ } kind;
  union
  {
    struct { IfStmt ifstmt_; } ififstmt_;
    struct { ElseStmt elsestmt_; IfStmt ifstmt_; } if1_;
    struct { ElsIfStmt elsifstmt_; ElseStmt elsestmt_; IfStmt ifstmt_; } if2_;
  } u;
};

If make_IfIfStmt(IfStmt p0);
If make_If1(IfStmt p0, ElseStmt p1);
If make_If2(IfStmt p0, ElsIfStmt p1, ElseStmt p2);
If make_If_(void);

struct IfStmt_
{
  enum { is_IfStmt1 } kind;
  union
  {
    struct { BlocoStmt blocostmt_; ExpressaoLogica expressaologica_; } ifstmt1_;
  } u;
};

IfStmt make_IfStmt1(ExpressaoLogica p0, BlocoStmt p1);

struct ElseStmt_
{
  enum { is_ElseStmt1 } kind;
  union
  {
    struct { BlocoStmt blocostmt_; } elsestmt1_;
  } u;
};

ElseStmt make_ElseStmt1(BlocoStmt p0);

struct ElsIfStmt_
{
  enum { is_ElsIfStmt1 } kind;
  union
  {
    struct { BlocoStmt blocostmt_; ExpressaoLogica expressaologica_; } elsifstmt1_;
  } u;
};

ElsIfStmt make_ElsIfStmt1(ExpressaoLogica p0, BlocoStmt p1);

struct While_
{
  enum { is_While1 } kind;
  union
  {
    struct { BlocoStmt blocostmt_; ExpressaoLogica expressaologica_; } while1_;
  } u;
};

While make_While1(ExpressaoLogica p0, BlocoStmt p1);

struct For_
{
  enum { is_For1 } kind;
  union
  {
    struct { Atribuicao atribuicao_; BlocoStmt blocostmt_; RExpr rexpr_; } for1_;
  } u;
};

For make_For1(Atribuicao p0, RExpr p1, BlocoStmt p2);

struct Case_
{
  enum { is_CaseCaseStmt } kind;
  union
  {
    struct { CaseStmt casestmt_; } casecasestmt_;
  } u;
};

Case make_CaseCaseStmt(CaseStmt p0);

struct CaseStmt_
{
  enum { is_CaseStmt1, is_CaseStmt2 } kind;
  union
  {
    struct { BlocoStmt blocostmt_; Ident ident_; } casestmt1_;
    struct { BlocoStmt blocostmt_; } casestmt2_;
  } u;
};

CaseStmt make_CaseStmt1(Ident p0, BlocoStmt p1);
CaseStmt make_CaseStmt2(BlocoStmt p0);

struct Type_
{
  enum { is_Type_INTEGER, is_Type_REAL, is_Type_CHAR, is_Type_STRING } kind;
  union
  {
  } u;
};

Type make_Type_INTEGER(void);
Type make_Type_REAL(void);
Type make_Type_CHAR(void);
Type make_Type_STRING(void);

struct OperadoresLogicos_
{
  enum { is_OperadoresLogicos1, is_OperadoresLogicos2, is_OperadoresLogicos3, is_OperadoresLogicos4, is_OperadoresLogicos5, is_OperadoresLogicos6 } kind;
  union
  {
  } u;
};

OperadoresLogicos make_OperadoresLogicos1(void);
OperadoresLogicos make_OperadoresLogicos2(void);
OperadoresLogicos make_OperadoresLogicos3(void);
OperadoresLogicos make_OperadoresLogicos4(void);
OperadoresLogicos make_OperadoresLogicos5(void);
OperadoresLogicos make_OperadoresLogicos6(void);

struct ConectivosLogicos_
{
  enum { is_ConectivosLogicos_AND, is_ConectivosLogicos_OR, is_ConectivosLogicos_NOT } kind;
  union
  {
  } u;
};

ConectivosLogicos make_ConectivosLogicos_AND(void);
ConectivosLogicos make_ConectivosLogicos_OR(void);
ConectivosLogicos make_ConectivosLogicos_NOT(void);

/***************************   Cloning   ******************************/

Progr clone_Progr(Progr p);
BlocoDec clone_BlocoDec(BlocoDec p);
BlocoConstante clone_BlocoConstante(BlocoConstante p);
RegraConstante clone_RegraConstante(RegraConstante p);
RegraDec clone_RegraDec(RegraDec p);
BlocoVar clone_BlocoVar(BlocoVar p);
RegraDecVar clone_RegraDecVar(RegraDecVar p);
BlocoType clone_BlocoType(BlocoType p);
RegraType clone_RegraType(RegraType p);
RegraDecVetor clone_RegraDecVetor(RegraDecVetor p);
RegraDecStruct clone_RegraDecStruct(RegraDecStruct p);
BlocoStmt clone_BlocoStmt(BlocoStmt p);
RegraStmt clone_RegraStmt(RegraStmt p);
Stmt clone_Stmt(Stmt p);
Atribuicao clone_Atribuicao(Atribuicao p);
AtribuicaoVetor clone_AtribuicaoVetor(AtribuicaoVetor p);
AtribuicaoStruct clone_AtribuicaoStruct(AtribuicaoStruct p);
Valor clone_Valor(Valor p);
RExpr clone_RExpr(RExpr p);
Opa clone_Opa(Opa p);
ExpressaoLogica clone_ExpressaoLogica(ExpressaoLogica p);
If clone_If(If p);
IfStmt clone_IfStmt(IfStmt p);
ElseStmt clone_ElseStmt(ElseStmt p);
ElsIfStmt clone_ElsIfStmt(ElsIfStmt p);
While clone_While(While p);
For clone_For(For p);
Case clone_Case(Case p);
CaseStmt clone_CaseStmt(CaseStmt p);
Type clone_Type(Type p);
OperadoresLogicos clone_OperadoresLogicos(OperadoresLogicos p);
ConectivosLogicos clone_ConectivosLogicos(ConectivosLogicos p);

/********************   Recursive Destructors    **********************/

/* These free an entire abstract syntax tree
 * including all subtrees and strings.
 *
 * Will not work properly if there is sharing in the tree,
 * i.e., when some pointers are aliased.  In this case
 * it will attempt to free the same memory twice.
 */

void free_Progr(Progr p);
void free_BlocoDec(BlocoDec p);
void free_BlocoConstante(BlocoConstante p);
void free_RegraConstante(RegraConstante p);
void free_RegraDec(RegraDec p);
void free_BlocoVar(BlocoVar p);
void free_RegraDecVar(RegraDecVar p);
void free_BlocoType(BlocoType p);
void free_RegraType(RegraType p);
void free_RegraDecVetor(RegraDecVetor p);
void free_RegraDecStruct(RegraDecStruct p);
void free_BlocoStmt(BlocoStmt p);
void free_RegraStmt(RegraStmt p);
void free_Stmt(Stmt p);
void free_Atribuicao(Atribuicao p);
void free_AtribuicaoVetor(AtribuicaoVetor p);
void free_AtribuicaoStruct(AtribuicaoStruct p);
void free_Valor(Valor p);
void free_RExpr(RExpr p);
void free_Opa(Opa p);
void free_ExpressaoLogica(ExpressaoLogica p);
void free_If(If p);
void free_IfStmt(IfStmt p);
void free_ElseStmt(ElseStmt p);
void free_ElsIfStmt(ElsIfStmt p);
void free_While(While p);
void free_For(For p);
void free_Case(Case p);
void free_CaseStmt(CaseStmt p);
void free_Type(Type p);
void free_OperadoresLogicos(OperadoresLogicos p);
void free_ConectivosLogicos(ConectivosLogicos p);


#endif

/* File generated by the BNF Converter (bnfc 2.9.4). */

#ifndef PRINTER_HEADER
#define PRINTER_HEADER

#include "Absyn.h"

/* Certain applications may improve performance by changing the buffer size */
#define BUFFER_INITIAL 2048
/* You may wish to change _L_PAREN or _R_PAREN */
#define _L_PAREN '('
#define _R_PAREN ')'

/* The following are simple heuristics for rendering terminals */
/* You may wish to change them */
void renderCC(Char c);
void renderCS(String s);
void indent(void);
void backup(void);
void onEmptyLine(void);
void removeTrailingSpaces(void);
void removeTrailingWhitespace(void);


char *printProgr(Progr p);
char *printBlocoDec(BlocoDec p);
char *printBlocoConstante(BlocoConstante p);
char *printRegraConstante(RegraConstante p);
char *printRegraDec(RegraDec p);
char *printBlocoVar(BlocoVar p);
char *printRegraDecVar(RegraDecVar p);
char *printBlocoType(BlocoType p);
char *printRegraType(RegraType p);
char *printRegraDecVetor(RegraDecVetor p);
char *printRegraDecStruct(RegraDecStruct p);
char *printBlocoStmt(BlocoStmt p);
char *printRegraStmt(RegraStmt p);
char *printStmt(Stmt p);
char *printAtribuicao(Atribuicao p);
char *printAtribuicaoVetor(AtribuicaoVetor p);
char *printAtribuicaoStruct(AtribuicaoStruct p);
char *printValor(Valor p);
char *printRExpr(RExpr p);
char *printOpa(Opa p);
char *printExpressaoLogica(ExpressaoLogica p);
char *printIf(If p);
char *printIfStmt(IfStmt p);
char *printElseStmt(ElseStmt p);
char *printElsIfStmt(ElsIfStmt p);
char *printWhile(While p);
char *printFor(For p);
char *printCase(Case p);
char *printCaseStmt(CaseStmt p);
char *printType(Type p);
char *printOperadoresLogicos(OperadoresLogicos p);
char *printConectivosLogicos(ConectivosLogicos p);

void ppProgr(Progr p, int i);
void ppBlocoDec(BlocoDec p, int i);
void ppBlocoConstante(BlocoConstante p, int i);
void ppRegraConstante(RegraConstante p, int i);
void ppRegraDec(RegraDec p, int i);
void ppBlocoVar(BlocoVar p, int i);
void ppRegraDecVar(RegraDecVar p, int i);
void ppBlocoType(BlocoType p, int i);
void ppRegraType(RegraType p, int i);
void ppRegraDecVetor(RegraDecVetor p, int i);
void ppRegraDecStruct(RegraDecStruct p, int i);
void ppBlocoStmt(BlocoStmt p, int i);
void ppRegraStmt(RegraStmt p, int i);
void ppStmt(Stmt p, int i);
void ppAtribuicao(Atribuicao p, int i);
void ppAtribuicaoVetor(AtribuicaoVetor p, int i);
void ppAtribuicaoStruct(AtribuicaoStruct p, int i);
void ppValor(Valor p, int i);
void ppRExpr(RExpr p, int i);
void ppOpa(Opa p, int i);
void ppExpressaoLogica(ExpressaoLogica p, int i);
void ppIf(If p, int i);
void ppIfStmt(IfStmt p, int i);
void ppElseStmt(ElseStmt p, int i);
void ppElsIfStmt(ElsIfStmt p, int i);
void ppWhile(While p, int i);
void ppFor(For p, int i);
void ppCase(Case p, int i);
void ppCaseStmt(CaseStmt p, int i);
void ppType(Type p, int i);
void ppOperadoresLogicos(OperadoresLogicos p, int i);
void ppConectivosLogicos(ConectivosLogicos p, int i);

char *showProgr(Progr p);
char *showBlocoDec(BlocoDec p);
char *showBlocoConstante(BlocoConstante p);
char *showRegraConstante(RegraConstante p);
char *showRegraDec(RegraDec p);
char *showBlocoVar(BlocoVar p);
char *showRegraDecVar(RegraDecVar p);
char *showBlocoType(BlocoType p);
char *showRegraType(RegraType p);
char *showRegraDecVetor(RegraDecVetor p);
char *showRegraDecStruct(RegraDecStruct p);
char *showBlocoStmt(BlocoStmt p);
char *showRegraStmt(RegraStmt p);
char *showStmt(Stmt p);
char *showAtribuicao(Atribuicao p);
char *showAtribuicaoVetor(AtribuicaoVetor p);
char *showAtribuicaoStruct(AtribuicaoStruct p);
char *showValor(Valor p);
char *showRExpr(RExpr p);
char *showOpa(Opa p);
char *showExpressaoLogica(ExpressaoLogica p);
char *showIf(If p);
char *showIfStmt(IfStmt p);
char *showElseStmt(ElseStmt p);
char *showElsIfStmt(ElsIfStmt p);
char *showWhile(While p);
char *showFor(For p);
char *showCase(Case p);
char *showCaseStmt(CaseStmt p);
char *showType(Type p);
char *showOperadoresLogicos(OperadoresLogicos p);
char *showConectivosLogicos(ConectivosLogicos p);

void shProgr(Progr p);
void shBlocoDec(BlocoDec p);
void shBlocoConstante(BlocoConstante p);
void shRegraConstante(RegraConstante p);
void shRegraDec(RegraDec p);
void shBlocoVar(BlocoVar p);
void shRegraDecVar(RegraDecVar p);
void shBlocoType(BlocoType p);
void shRegraType(RegraType p);
void shRegraDecVetor(RegraDecVetor p);
void shRegraDecStruct(RegraDecStruct p);
void shBlocoStmt(BlocoStmt p);
void shRegraStmt(RegraStmt p);
void shStmt(Stmt p);
void shAtribuicao(Atribuicao p);
void shAtribuicaoVetor(AtribuicaoVetor p);
void shAtribuicaoStruct(AtribuicaoStruct p);
void shValor(Valor p);
void shRExpr(RExpr p);
void shOpa(Opa p);
void shExpressaoLogica(ExpressaoLogica p);
void shIf(If p);
void shIfStmt(IfStmt p);
void shElseStmt(ElseStmt p);
void shElsIfStmt(ElsIfStmt p);
void shWhile(While p);
void shFor(For p);
void shCase(Case p);
void shCaseStmt(CaseStmt p);
void shType(Type p);
void shOperadoresLogicos(OperadoresLogicos p);
void shConectivosLogicos(ConectivosLogicos p);

void ppInteger(Integer n, int i);
void ppDouble(Double d, int i);
void ppChar(Char c, int i);
void ppString(String s, int i);
void ppIdent(String s, int i);
void shInteger(Integer n);
void shDouble(Double d);
void shChar(Char c);
void shString(String s);
void shIdent(String s);
void bufAppendS(const char *s);
void bufAppendC(const char c);
void bufReset(void);
void resizeBuffer(void);


void visitProgr(Progr p);
void visitBlocoDec(BlocoDec p);
void visitBlocoConstante(BlocoConstante p);
void visitRegraConstante(RegraConstante p);
void visitRegraDec(RegraDec p);
void visitBlocoVar(BlocoVar p);
void visitRegraDecVar(RegraDecVar p);
void visitBlocoType(BlocoType p);
void visitRegraType(RegraType p);
void visitRegraDecVetor(RegraDecVetor p);
void visitRegraDecStruct(RegraDecStruct p);
void visitBlocoStmt(BlocoStmt p);
void visitRegraStmt(RegraStmt p);
void visitStmt(Stmt p);
void visitAtribuicao(Atribuicao p);
void visitAtribuicaoVetor(AtribuicaoVetor p);
void visitAtribuicaoStruct(AtribuicaoStruct p);
void visitValor(Valor p);
void visitRExpr(RExpr p);
void visitOpa(Opa p);
void visitExpressaoLogica(ExpressaoLogica p);
void visitIf(If p);
void visitIfStmt(IfStmt p);
void visitElseStmt(ElseStmt p);
void visitElsIfStmt(ElsIfStmt p);
void visitWhile(While p);
void visitFor(For p);
void visitCase(Case p);
void visitCaseStmt(CaseStmt p);
void visitType(Type p);
void visitOperadoresLogicos(OperadoresLogicos p);
void visitConectivosLogicos(ConectivosLogicos p);


void visitIdent(Ident i);
void visitInteger(Integer i);
void visitDouble(Double d);
void visitChar(Char c);
void visitString(String s);
#endif

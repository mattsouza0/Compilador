/* File generated by the BNF Converter (bnfc 2.9.4). */

#ifndef SKELETON_HEADER
#define SKELETON_HEADER
/* You might want to change the above name. */

#include "Absyn.h"


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


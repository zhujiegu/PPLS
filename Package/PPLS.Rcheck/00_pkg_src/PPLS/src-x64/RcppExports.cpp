// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// loglC
List loglC(Eigen::MatrixXd W, Eigen::MatrixXd C, Eigen::MatrixXd P_Yosc, Eigen::MatrixXd P_Xosc, Eigen::MatrixXd B_T, Eigen::MatrixXd Dat, double sigX, double sigY, double sigH, Eigen::MatrixXd sigT, Eigen::MatrixXd sigTo, Eigen::MatrixXd sigUo, double c1, double c2, double c3);
RcppExport SEXP PPLS_loglC(SEXP WSEXP, SEXP CSEXP, SEXP P_YoscSEXP, SEXP P_XoscSEXP, SEXP B_TSEXP, SEXP DatSEXP, SEXP sigXSEXP, SEXP sigYSEXP, SEXP sigHSEXP, SEXP sigTSEXP, SEXP sigToSEXP, SEXP sigUoSEXP, SEXP c1SEXP, SEXP c2SEXP, SEXP c3SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type W(WSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type C(CSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type P_Yosc(P_YoscSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type P_Xosc(P_XoscSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type B_T(B_TSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type Dat(DatSEXP);
    Rcpp::traits::input_parameter< double >::type sigX(sigXSEXP);
    Rcpp::traits::input_parameter< double >::type sigY(sigYSEXP);
    Rcpp::traits::input_parameter< double >::type sigH(sigHSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type sigT(sigTSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type sigTo(sigToSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type sigUo(sigUoSEXP);
    Rcpp::traits::input_parameter< double >::type c1(c1SEXP);
    Rcpp::traits::input_parameter< double >::type c2(c2SEXP);
    Rcpp::traits::input_parameter< double >::type c3(c3SEXP);
    __result = Rcpp::wrap(loglC(W, C, P_Yosc, P_Xosc, B_T, Dat, sigX, sigY, sigH, sigT, sigTo, sigUo, c1, c2, c3));
    return __result;
END_RCPP
}
// EMstepC
List EMstepC(Eigen::MatrixXd W, Eigen::MatrixXd C, Eigen::MatrixXd P_Yosc, Eigen::MatrixXd P_Xosc, Eigen::MatrixXd B_T, Eigen::MatrixXd Dat, double sigX, double sigY, double sigH, Eigen::MatrixXd sigT, Eigen::MatrixXd sigTo, Eigen::MatrixXd sigUo, Eigen::MatrixXd invS);
RcppExport SEXP PPLS_EMstepC(SEXP WSEXP, SEXP CSEXP, SEXP P_YoscSEXP, SEXP P_XoscSEXP, SEXP B_TSEXP, SEXP DatSEXP, SEXP sigXSEXP, SEXP sigYSEXP, SEXP sigHSEXP, SEXP sigTSEXP, SEXP sigToSEXP, SEXP sigUoSEXP, SEXP invSSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type W(WSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type C(CSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type P_Yosc(P_YoscSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type P_Xosc(P_XoscSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type B_T(B_TSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type Dat(DatSEXP);
    Rcpp::traits::input_parameter< double >::type sigX(sigXSEXP);
    Rcpp::traits::input_parameter< double >::type sigY(sigYSEXP);
    Rcpp::traits::input_parameter< double >::type sigH(sigHSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type sigT(sigTSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type sigTo(sigToSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type sigUo(sigUoSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type invS(invSSEXP);
    __result = Rcpp::wrap(EMstepC(W, C, P_Yosc, P_Xosc, B_T, Dat, sigX, sigY, sigH, sigT, sigTo, sigUo, invS));
    return __result;
END_RCPP
}
// simulC
Eigen::MatrixXd simulC(int N, Eigen::MatrixXd W, Eigen::MatrixXd C, Eigen::MatrixXd P_Yosc, Eigen::MatrixXd P_Xosc, Eigen::MatrixXd B_T, double sigX, double sigY, double sigH, Eigen::MatrixXd sigT, Eigen::MatrixXd sigTo, Eigen::MatrixXd sigUo);
RcppExport SEXP PPLS_simulC(SEXP NSEXP, SEXP WSEXP, SEXP CSEXP, SEXP P_YoscSEXP, SEXP P_XoscSEXP, SEXP B_TSEXP, SEXP sigXSEXP, SEXP sigYSEXP, SEXP sigHSEXP, SEXP sigTSEXP, SEXP sigToSEXP, SEXP sigUoSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type W(WSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type C(CSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type P_Yosc(P_YoscSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type P_Xosc(P_XoscSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type B_T(B_TSEXP);
    Rcpp::traits::input_parameter< double >::type sigX(sigXSEXP);
    Rcpp::traits::input_parameter< double >::type sigY(sigYSEXP);
    Rcpp::traits::input_parameter< double >::type sigH(sigHSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type sigT(sigTSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type sigTo(sigToSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type sigUo(sigUoSEXP);
    __result = Rcpp::wrap(simulC(N, W, C, P_Yosc, P_Xosc, B_T, sigX, sigY, sigH, sigT, sigTo, sigUo));
    return __result;
END_RCPP
}
// loglC_fast
double loglC_fast(Eigen::MatrixXd W, Eigen::MatrixXd C, Eigen::MatrixXd X, Eigen::MatrixXd Y, double sigX, double sigY, Eigen::VectorXd sig2T, Eigen::VectorXd c1, Eigen::VectorXd c2, Eigen::VectorXd c3, Eigen::VectorXd Kc);
RcppExport SEXP PPLS_loglC_fast(SEXP WSEXP, SEXP CSEXP, SEXP XSEXP, SEXP YSEXP, SEXP sigXSEXP, SEXP sigYSEXP, SEXP sig2TSEXP, SEXP c1SEXP, SEXP c2SEXP, SEXP c3SEXP, SEXP KcSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type W(WSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type C(CSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type X(XSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type Y(YSEXP);
    Rcpp::traits::input_parameter< double >::type sigX(sigXSEXP);
    Rcpp::traits::input_parameter< double >::type sigY(sigYSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type sig2T(sig2TSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type c1(c1SEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type c2(c2SEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type c3(c3SEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type Kc(KcSEXP);
    __result = Rcpp::wrap(loglC_fast(W, C, X, Y, sigX, sigY, sig2T, c1, c2, c3, Kc));
    return __result;
END_RCPP
}
// EMstepC_fast
List EMstepC_fast(Eigen::VectorXd W, Eigen::VectorXd C, double B, Eigen::MatrixXd X, Eigen::MatrixXd Y, double sigX, double sigY, double sigH, double sigT, double c1, double c2, double c3);
RcppExport SEXP PPLS_EMstepC_fast(SEXP WSEXP, SEXP CSEXP, SEXP BSEXP, SEXP XSEXP, SEXP YSEXP, SEXP sigXSEXP, SEXP sigYSEXP, SEXP sigHSEXP, SEXP sigTSEXP, SEXP c1SEXP, SEXP c2SEXP, SEXP c3SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type W(WSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type C(CSEXP);
    Rcpp::traits::input_parameter< double >::type B(BSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type X(XSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type Y(YSEXP);
    Rcpp::traits::input_parameter< double >::type sigX(sigXSEXP);
    Rcpp::traits::input_parameter< double >::type sigY(sigYSEXP);
    Rcpp::traits::input_parameter< double >::type sigH(sigHSEXP);
    Rcpp::traits::input_parameter< double >::type sigT(sigTSEXP);
    Rcpp::traits::input_parameter< double >::type c1(c1SEXP);
    Rcpp::traits::input_parameter< double >::type c2(c2SEXP);
    Rcpp::traits::input_parameter< double >::type c3(c3SEXP);
    __result = Rcpp::wrap(EMstepC_fast(W, C, B, X, Y, sigX, sigY, sigH, sigT, c1, c2, c3));
    return __result;
END_RCPP
}
// meta_Estep
List meta_Estep(Eigen::VectorXd W, Eigen::VectorXd C, double B, Eigen::MatrixXd X, Eigen::MatrixXd Y, double sigX, double sigY, double sigH, double sigT, double c1, double c2, double c3);
RcppExport SEXP PPLS_meta_Estep(SEXP WSEXP, SEXP CSEXP, SEXP BSEXP, SEXP XSEXP, SEXP YSEXP, SEXP sigXSEXP, SEXP sigYSEXP, SEXP sigHSEXP, SEXP sigTSEXP, SEXP c1SEXP, SEXP c2SEXP, SEXP c3SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type W(WSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type C(CSEXP);
    Rcpp::traits::input_parameter< double >::type B(BSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type X(XSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type Y(YSEXP);
    Rcpp::traits::input_parameter< double >::type sigX(sigXSEXP);
    Rcpp::traits::input_parameter< double >::type sigY(sigYSEXP);
    Rcpp::traits::input_parameter< double >::type sigH(sigHSEXP);
    Rcpp::traits::input_parameter< double >::type sigT(sigTSEXP);
    Rcpp::traits::input_parameter< double >::type c1(c1SEXP);
    Rcpp::traits::input_parameter< double >::type c2(c2SEXP);
    Rcpp::traits::input_parameter< double >::type c3(c3SEXP);
    __result = Rcpp::wrap(meta_Estep(W, C, B, X, Y, sigX, sigY, sigH, sigT, c1, c2, c3));
    return __result;
END_RCPP
}
// meta_Mstep
List meta_Mstep(List ret);
RcppExport SEXP PPLS_meta_Mstep(SEXP retSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type ret(retSEXP);
    __result = Rcpp::wrap(meta_Mstep(ret));
    return __result;
END_RCPP
}

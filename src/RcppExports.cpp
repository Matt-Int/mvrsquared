// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// calc_sum_squares_latent
NumericVector calc_sum_squares_latent(arma::sp_mat Y, arma::mat X, arma::mat W, arma::vec ybar, int threads);
RcppExport SEXP _mvrsquared_calc_sum_squares_latent(SEXP YSEXP, SEXP XSEXP, SEXP WSEXP, SEXP ybarSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::sp_mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type W(WSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type ybar(ybarSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_sum_squares_latent(Y, X, W, ybar, threads));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_mvrsquared_calc_sum_squares_latent", (DL_FUNC) &_mvrsquared_calc_sum_squares_latent, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_mvrsquared(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

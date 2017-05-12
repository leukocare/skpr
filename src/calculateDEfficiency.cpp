// [[Rcpp::depends(RcppArmadillo)]]

#include <RcppArmadillo.h>
using namespace Rcpp;

// [[Rcpp::export]]
double calculateDEfficiency(arma::mat currentDesign) {
  return(pow(arma::det(currentDesign.t()*currentDesign),(1.0/double(currentDesign.n_cols)))/double(currentDesign.n_rows));
}
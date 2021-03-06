% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/EM_W_multi.R
\name{fconstraint}
\alias{fconstraint}
\title{Defines an appropriate list with chosen constraints}
\usage{
fconstraint(constraints = NULL)
}
\arguments{
\item{constraints}{List. Should contain one or more numeric elements with name(s) from W, C, B, sigE, sigF, sigH and sigT. Defaults to \code{NULL} is no constraints are given.}
}
\value{
A named list with elements either the value of the constraint or \code{NULL}.
}
\description{
Defines an appropriate list with chosen constraints
}
\examples{
fconstraint(list(sigH=.1))
fconstraint(list(B=3,sigE=.5))
}


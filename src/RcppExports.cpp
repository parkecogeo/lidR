// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// C_grid_canopy
List C_grid_canopy(S4 las, double res, double subcircle);
RcppExport SEXP _lidR_C_grid_canopy(SEXP lasSEXP, SEXP resSEXP, SEXP subcircleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type las(lasSEXP);
    Rcpp::traits::input_parameter< double >::type res(resSEXP);
    Rcpp::traits::input_parameter< double >::type subcircle(subcircleSEXP);
    rcpp_result_gen = Rcpp::wrap(C_grid_canopy(las, res, subcircle));
    return rcpp_result_gen;
END_RCPP
}
// C_knn
Rcpp::List C_knn(NumericVector X, NumericVector Y, NumericVector x, NumericVector y, int k);
RcppExport SEXP _lidR_C_knn(SEXP XSEXP, SEXP YSEXP, SEXP xSEXP, SEXP ySEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Y(YSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(C_knn(X, Y, x, y, k));
    return rcpp_result_gen;
END_RCPP
}
// C_knnidw
NumericVector C_knnidw(NumericVector X, NumericVector Y, NumericVector Z, NumericVector x, NumericVector y, int k, double p);
RcppExport SEXP _lidR_C_knnidw(SEXP XSEXP, SEXP YSEXP, SEXP ZSEXP, SEXP xSEXP, SEXP ySEXP, SEXP kSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Y(YSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(C_knnidw(X, Y, Z, x, y, k, p));
    return rcpp_result_gen;
END_RCPP
}
// C_lassmooth
NumericVector C_lassmooth(S4 las, double size);
RcppExport SEXP _lidR_C_lassmooth(SEXP lasSEXP, SEXP sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type las(lasSEXP);
    Rcpp::traits::input_parameter< double >::type size(sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(C_lassmooth(las, size));
    return rcpp_result_gen;
END_RCPP
}
// C_lastrees_dalponte
IntegerMatrix C_lastrees_dalponte(NumericMatrix Image, IntegerMatrix Seeds, double th_seed, double th_crown, double th_tree, double DIST);
RcppExport SEXP _lidR_C_lastrees_dalponte(SEXP ImageSEXP, SEXP SeedsSEXP, SEXP th_seedSEXP, SEXP th_crownSEXP, SEXP th_treeSEXP, SEXP DISTSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type Image(ImageSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type Seeds(SeedsSEXP);
    Rcpp::traits::input_parameter< double >::type th_seed(th_seedSEXP);
    Rcpp::traits::input_parameter< double >::type th_crown(th_crownSEXP);
    Rcpp::traits::input_parameter< double >::type th_tree(th_treeSEXP);
    Rcpp::traits::input_parameter< double >::type DIST(DISTSEXP);
    rcpp_result_gen = Rcpp::wrap(C_lastrees_dalponte(Image, Seeds, th_seed, th_crown, th_tree, DIST));
    return rcpp_result_gen;
END_RCPP
}
// C_lastrees_li
IntegerVector C_lastrees_li(S4 las, double dt1, double dt2, double th_tree, double R, bool progressbar);
RcppExport SEXP _lidR_C_lastrees_li(SEXP lasSEXP, SEXP dt1SEXP, SEXP dt2SEXP, SEXP th_treeSEXP, SEXP RSEXP, SEXP progressbarSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type las(lasSEXP);
    Rcpp::traits::input_parameter< double >::type dt1(dt1SEXP);
    Rcpp::traits::input_parameter< double >::type dt2(dt2SEXP);
    Rcpp::traits::input_parameter< double >::type th_tree(th_treeSEXP);
    Rcpp::traits::input_parameter< double >::type R(RSEXP);
    Rcpp::traits::input_parameter< bool >::type progressbar(progressbarSEXP);
    rcpp_result_gen = Rcpp::wrap(C_lastrees_li(las, dt1, dt2, th_tree, R, progressbar));
    return rcpp_result_gen;
END_RCPP
}
// C_LocalMaximaMatrix
IntegerMatrix C_LocalMaximaMatrix(NumericMatrix image, int ws, double th);
RcppExport SEXP _lidR_C_LocalMaximaMatrix(SEXP imageSEXP, SEXP wsSEXP, SEXP thSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type image(imageSEXP);
    Rcpp::traits::input_parameter< int >::type ws(wsSEXP);
    Rcpp::traits::input_parameter< double >::type th(thSEXP);
    rcpp_result_gen = Rcpp::wrap(C_LocalMaximaMatrix(image, ws, th));
    return rcpp_result_gen;
END_RCPP
}
// C_LocalMaximaPoints
LogicalVector C_LocalMaximaPoints(S4 las, double ws, double min_height, bool displaybar);
RcppExport SEXP _lidR_C_LocalMaximaPoints(SEXP lasSEXP, SEXP wsSEXP, SEXP min_heightSEXP, SEXP displaybarSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type las(lasSEXP);
    Rcpp::traits::input_parameter< double >::type ws(wsSEXP);
    Rcpp::traits::input_parameter< double >::type min_height(min_heightSEXP);
    Rcpp::traits::input_parameter< bool >::type displaybar(displaybarSEXP);
    rcpp_result_gen = Rcpp::wrap(C_LocalMaximaPoints(las, ws, min_height, displaybar));
    return rcpp_result_gen;
END_RCPP
}
// C_tsearch
IntegerVector C_tsearch(NumericVector x, NumericVector y, IntegerMatrix elem, NumericVector xi, NumericVector yi, bool diplaybar);
RcppExport SEXP _lidR_C_tsearch(SEXP xSEXP, SEXP ySEXP, SEXP elemSEXP, SEXP xiSEXP, SEXP yiSEXP, SEXP diplaybarSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type elem(elemSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type xi(xiSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type yi(yiSEXP);
    Rcpp::traits::input_parameter< bool >::type diplaybar(diplaybarSEXP);
    rcpp_result_gen = Rcpp::wrap(C_tsearch(x, y, elem, xi, yi, diplaybar));
    return rcpp_result_gen;
END_RCPP
}
// fast_table
IntegerVector fast_table(IntegerVector x, int size);
RcppExport SEXP _lidR_fast_table(SEXP xSEXP, SEXP sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type size(sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(fast_table(x, size));
    return rcpp_result_gen;
END_RCPP
}
// fast_countequal
int fast_countequal(NumericVector x, double t);
RcppExport SEXP _lidR_fast_countequal(SEXP xSEXP, SEXP tSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type t(tSEXP);
    rcpp_result_gen = Rcpp::wrap(fast_countequal(x, t));
    return rcpp_result_gen;
END_RCPP
}
// fast_countbelow
int fast_countbelow(NumericVector x, double t);
RcppExport SEXP _lidR_fast_countbelow(SEXP xSEXP, SEXP tSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type t(tSEXP);
    rcpp_result_gen = Rcpp::wrap(fast_countbelow(x, t));
    return rcpp_result_gen;
END_RCPP
}
// fast_countover
int fast_countover(NumericVector x, double t);
RcppExport SEXP _lidR_fast_countover(SEXP xSEXP, SEXP tSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type t(tSEXP);
    rcpp_result_gen = Rcpp::wrap(fast_countover(x, t));
    return rcpp_result_gen;
END_RCPP
}
// fast_extract
NumericVector fast_extract(NumericMatrix r, NumericVector x, NumericVector y, double xmin, double ymin, double res);
RcppExport SEXP _lidR_fast_extract(SEXP rSEXP, SEXP xSEXP, SEXP ySEXP, SEXP xminSEXP, SEXP yminSEXP, SEXP resSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type r(rSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type xmin(xminSEXP);
    Rcpp::traits::input_parameter< double >::type ymin(yminSEXP);
    Rcpp::traits::input_parameter< double >::type res(resSEXP);
    rcpp_result_gen = Rcpp::wrap(fast_extract(r, x, y, xmin, ymin, res));
    return rcpp_result_gen;
END_RCPP
}
// roundc
NumericVector roundc(NumericVector x, int digit);
RcppExport SEXP _lidR_roundc(SEXP xSEXP, SEXP digitSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type digit(digitSEXP);
    rcpp_result_gen = Rcpp::wrap(roundc(x, digit));
    return rcpp_result_gen;
END_RCPP
}
// MorphologicalOpening
NumericVector MorphologicalOpening(NumericVector X, NumericVector Y, NumericVector Z, double resolution, bool displaybar);
RcppExport SEXP _lidR_MorphologicalOpening(SEXP XSEXP, SEXP YSEXP, SEXP ZSEXP, SEXP resolutionSEXP, SEXP displaybarSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Y(YSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< double >::type resolution(resolutionSEXP);
    Rcpp::traits::input_parameter< bool >::type displaybar(displaybarSEXP);
    rcpp_result_gen = Rcpp::wrap(MorphologicalOpening(X, Y, Z, resolution, displaybar));
    return rcpp_result_gen;
END_RCPP
}
// point_in_polygon
bool point_in_polygon(NumericVector vertx, NumericVector verty, double pointx, double pointy);
RcppExport SEXP _lidR_point_in_polygon(SEXP vertxSEXP, SEXP vertySEXP, SEXP pointxSEXP, SEXP pointySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type vertx(vertxSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type verty(vertySEXP);
    Rcpp::traits::input_parameter< double >::type pointx(pointxSEXP);
    Rcpp::traits::input_parameter< double >::type pointy(pointySEXP);
    rcpp_result_gen = Rcpp::wrap(point_in_polygon(vertx, verty, pointx, pointy));
    return rcpp_result_gen;
END_RCPP
}
// points_in_polygon
LogicalVector points_in_polygon(NumericVector vertx, NumericVector verty, NumericVector pointx, NumericVector pointy);
RcppExport SEXP _lidR_points_in_polygon(SEXP vertxSEXP, SEXP vertySEXP, SEXP pointxSEXP, SEXP pointySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type vertx(vertxSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type verty(vertySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pointx(pointxSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pointy(pointySEXP);
    rcpp_result_gen = Rcpp::wrap(points_in_polygon(vertx, verty, pointx, pointy));
    return rcpp_result_gen;
END_RCPP
}
// points_in_polygons
IntegerVector points_in_polygons(Rcpp::List vertx, Rcpp::List verty, NumericVector pointx, NumericVector pointy, bool displaybar);
RcppExport SEXP _lidR_points_in_polygons(SEXP vertxSEXP, SEXP vertySEXP, SEXP pointxSEXP, SEXP pointySEXP, SEXP displaybarSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type vertx(vertxSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type verty(vertySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pointx(pointxSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pointy(pointySEXP);
    Rcpp::traits::input_parameter< bool >::type displaybar(displaybarSEXP);
    rcpp_result_gen = Rcpp::wrap(points_in_polygons(vertx, verty, pointx, pointy, displaybar));
    return rcpp_result_gen;
END_RCPP
}
// tinfo
NumericMatrix tinfo(IntegerMatrix M, NumericMatrix X);
RcppExport SEXP _lidR_tinfo(SEXP MSEXP, SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type M(MSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(tinfo(M, X));
    return rcpp_result_gen;
END_RCPP
}
// update_list_by_ref
void update_list_by_ref(Rcpp::List x, CharacterVector name, double value);
RcppExport SEXP _lidR_update_list_by_ref(SEXP xSEXP, SEXP nameSEXP, SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type x(xSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type name(nameSEXP);
    Rcpp::traits::input_parameter< double >::type value(valueSEXP);
    update_list_by_ref(x, name, value);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_lidR_C_grid_canopy", (DL_FUNC) &_lidR_C_grid_canopy, 3},
    {"_lidR_C_knn", (DL_FUNC) &_lidR_C_knn, 5},
    {"_lidR_C_knnidw", (DL_FUNC) &_lidR_C_knnidw, 7},
    {"_lidR_C_lassmooth", (DL_FUNC) &_lidR_C_lassmooth, 2},
    {"_lidR_C_lastrees_dalponte", (DL_FUNC) &_lidR_C_lastrees_dalponte, 6},
    {"_lidR_C_lastrees_li", (DL_FUNC) &_lidR_C_lastrees_li, 6},
    {"_lidR_C_LocalMaximaMatrix", (DL_FUNC) &_lidR_C_LocalMaximaMatrix, 3},
    {"_lidR_C_LocalMaximaPoints", (DL_FUNC) &_lidR_C_LocalMaximaPoints, 4},
    {"_lidR_C_tsearch", (DL_FUNC) &_lidR_C_tsearch, 6},
    {"_lidR_fast_table", (DL_FUNC) &_lidR_fast_table, 2},
    {"_lidR_fast_countequal", (DL_FUNC) &_lidR_fast_countequal, 2},
    {"_lidR_fast_countbelow", (DL_FUNC) &_lidR_fast_countbelow, 2},
    {"_lidR_fast_countover", (DL_FUNC) &_lidR_fast_countover, 2},
    {"_lidR_fast_extract", (DL_FUNC) &_lidR_fast_extract, 6},
    {"_lidR_roundc", (DL_FUNC) &_lidR_roundc, 2},
    {"_lidR_MorphologicalOpening", (DL_FUNC) &_lidR_MorphologicalOpening, 5},
    {"_lidR_point_in_polygon", (DL_FUNC) &_lidR_point_in_polygon, 4},
    {"_lidR_points_in_polygon", (DL_FUNC) &_lidR_points_in_polygon, 4},
    {"_lidR_points_in_polygons", (DL_FUNC) &_lidR_points_in_polygons, 5},
    {"_lidR_tinfo", (DL_FUNC) &_lidR_tinfo, 2},
    {"_lidR_update_list_by_ref", (DL_FUNC) &_lidR_update_list_by_ref, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_lidR(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

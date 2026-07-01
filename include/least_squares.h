/// @file least_squares.h
/// Compute a least squares regression

#ifndef LEAST_SQUARES_H
#define LEAST_SQUARES_H

/// @brief x, y datapoints for least squares regression
typedef struct {
    /// The input values
    double *x;
    /// The output values
    double *y;
    /// The number of datapoints
    int n;
} Dataset;

/// @brief Read in some parameter data to the Dataset struct
/// @param filename Path to the file to read
/// @return A populated Dataset with our data points
Dataset read_data(const char *filename);

/// @brief Solve the least squares method fitting the best line to fit a Dataset
/// @param data Dataset to fit
/// @param slope Variable that will hold the slope of the line
/// @param intercept Variable that will hold the intercept of the line
void solve_least_squares(const Dataset *data, double *slope, double *intercept);

/// @brief Print the slope and intercept of a line
/// @param slope Line slope
/// @param intercept Line intercept
void print_solution(double slope, double intercept);

#endif // LEAST_SQUARES_H

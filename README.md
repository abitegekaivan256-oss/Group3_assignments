# Quartiles / Quantile - Group 3 Statistical Measures

This task is part of Group 3 - Statistical Measures.

The group's assigned statistical operations are:

- `quantile()`
- `mode()`
- `geometric_mean()`
- `harmonic_mean()`
- `weighted_mean()`

Our section focuses on the implementation of `quantile()` for calculating quartiles.

The program calculates:

- Q1 - First Quartile (25th percentile)
- Q2 - Second Quartile (50th percentile / Median)
- Q3 - Third Quartile (75th percentile)
- IQR - Interquartile Range

The Interquartile Range is calculated as:

IQR = Q3 - Q1

The implementation is written in C++ without directly calling a statistical library function for quantile calculation.


## Implementation Strategy

A DataFrame-like structure is represented using C++ vectors.

The example data contains two columns:

- Student
- Score

The score column is the numerical data used for the quartile calculations.

The implementation follows these steps:

1. Store the numerical observations in a vector.
2. Validate that the dataset is not empty.
3. Validate that the requested quantile is between 0 and 1.
4. Create a copy of the data.
5. Sort the data in ascending order.
6. Calculate the quantile position using:

   position = (n - 1) * q

7. Identify the lower and upper positions.
8. If the position is an exact index, return the corresponding value.
9. Otherwise, perform linear interpolation between the two surrounding values.
10. Calculate Q1, Q2 and Q3 by calling the quantile function with:
   
   - Q1 = quantile(0.25)
   - Q2 = quantile(0.50)
   - Q3 = quantile(0.75)

11. Calculate the Interquartile Range:

   IQR = Q3 - Q1



Key Decisions and Approaches

### Quantile range

The implementation accepts quantile values from 0 to 1.

Examples:

- 0.25 represents the 25th percentile.
- 0.50 represents the 50th percentile.
- 0.75 represents the 75th percentile.

### Sorting

The values are sorted before calculating the quantile position because quartiles depend on the ordered position of observations.

### Interpolation

This implementation uses linear interpolation when the calculated quantile position falls between two observations.

Polars supports several quantile interpolation methods, including `nearest`, `higher`, `lower`, `midpoint`, `linear`, and `equiprobable` in its current Python API.

For this re-implementation, `linear` interpolation was selected so that the calculation method is explicit and reproducible.

### DataFrame representation

The full group assignment refers to DataFrames. Since this implementation is written in C++, the example DataFrame is represented using C++ vectors containing the relevant columns.



## Quartile Relationship

Quartiles are specific quantiles.

| Quartile | Quantile |
|----------|----------|
| Q1       | 0.25     |
| Q2       | 0.50     |
| Q3       | 0.75     |

Q2 is also the median.

The Interquartile Range is:

IQR = Q3 - Q1



## Working Example
input values

The following DataFrame-like data is used:

| Student | Score |
|---------|-------|
| Student A | 10 |
| Student B | 20 |
| Student C | 20 |
| Student D | 30 |
| Student E | 40 |
| Student F | 20 |

The numerical data is:

`10, 20, 20, 30, 40, 20`

After sorting:

`10, 20, 20, 20, 30, 40`

### Output

```text
Q1 (25th percentile) : 20.00
Q2 (50th percentile) : 20.00
Q3 (75th percentile) : 27.50
IQR                  : 7.50
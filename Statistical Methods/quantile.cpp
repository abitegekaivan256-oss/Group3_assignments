#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;
using std::cout;
using std::endl;



double quantile(const vector<double>& data, double q)
{
    // Make sure the dataset is not empty
    if (data.empty())
    {
        cout << "Error: Dataset is empty." << endl;
        return 0;
    }

    // q must be between 0 and 1
    if (q < 0.0 || q > 1.0)
    {
        cout << "Error: Quantile must be between 0 and 1." << endl;
        return 0;
    }

    // Create a copy because we need to sort the data
    vector<double> sortedData = data;

    // Sort the data from smallest to largest
    sort(sortedData.begin(), sortedData.end());

    // Calculate the position of the required quantile
    double position = (sortedData.size() - 1) * q;

    // Find the lower and upper indexes
    int lowerIndex = floor(position);
    int upperIndex = ceil(position);

    // If the position is a whole number,
    // the quantile is exactly that value in the sorted data
    if (lowerIndex == upperIndex)
    {
        return sortedData[lowerIndex];
    }

    // Calculate the fractional part of the position
    double fraction = position - lowerIndex;

    // Linear interpolation between the lower and upper values
    double result =
        sortedData[lowerIndex] +
        fraction * (sortedData[upperIndex]
                  - sortedData[lowerIndex]);

    return result;
}



int main()
{
    // --------------------------------------------------------
    // Store the DataFrame-like data in C++ vectors
    // --------------------------------------------------------

    vector<string> students =
    {
        "Student A",
        "Student B",
        "Student C",
        "Student D",
        "Student E",
        "Student F"
    };

    vector<double> scores =
    {
        10, 20, 20, 30, 40, 20
    };


    // --------------------------------------------------------
    // Display the original data
    // --------------------------------------------------------

    cout << "========================================" << endl;
    cout << "DATAFRAME-LIKE DATA" << endl;
    cout << "========================================" << endl;

    cout << left
         << setw(15) << "Student"
         << "Score" << endl;

    cout << "----------------------------------------" << endl;

    for (int i = 0; i < students.size(); i++)
    {
        cout << left
             << setw(15) << students[i]
             << scores[i] << endl;
    }


    // --------------------------------------------------------
    // Create a sorted copy of the scores
    // --------------------------------------------------------

    vector<double> sortedScores = scores;

    sort(sortedScores.begin(), sortedScores.end());

    cout << "\nSorted data: ";

    for (double value : sortedScores)
    {
        cout << value << " ";
    }

    cout << endl;

    // Q1 is the 25th percentile
    double Q1 = quantile(scores, 0.25);

    // Q2 is the 50th percentile (median)
    double Q2 = quantile(scores, 0.50);

    // Q3 is the 75th percentile
    double Q3 = quantile(scores, 0.75);


    // --------------------------------------------------------
    // Calculate the Interquartile Range
    // --------------------------------------------------------

    double IQR = Q3 - Q1;


    // --------------------------------------------------------
    // Display the results
    // --------------------------------------------------------

    cout << fixed << setprecision(2);

    cout << "\n========================================" << endl;
    cout << "QUARTILE RESULTS" << endl;
    cout << "========================================" << endl;

    cout << "Q1 (25th percentile) : " << Q1 << endl;
    cout << "Q2 (50th percentile) : " << Q2 << endl;
    cout << "Q3 (75th percentile) : " << Q3 << endl;
    cout << "IQR                  : " << IQR << endl;


    return 0;
}/*The following DataFrame-like data is used:

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
IQR                  : 7.50 */
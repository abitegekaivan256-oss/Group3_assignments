#include <iostream>
using namespace std;

int main()
{
    int n;
    double number;
    double sum = 0;
    double harmonicMean;

    // Ask the user for the number of values
    cout << "Enter the number of values: ";
    cin >> n;

    // Ask the user to enter each value
    for (int i = 1; i <= n; i++)
    {
        cout << "Enter value " << i << ": ";
        cin >> number;

        // Add the reciprocal of the number
        sum = sum + (1 / number);
    }

    // Calculate the harmonic mean
    harmonicMean = n / sum;

    // Display the result
    cout << "The Harmonic Mean is: " << harmonicMean << endl;

    return 0;
}



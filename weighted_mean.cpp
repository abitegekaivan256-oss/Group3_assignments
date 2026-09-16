#include <iostream>   // allows use of cin and cout for input/output
#include <vector>     // allows use of dynamic arrays (vectors)
using namespace std;

int main() {
    int n;
    cout << "Enter number of values: ";
    cin >> n;   // ask user how many values they will enter

    // create two vectors: one for values, one for their weights
    vector<double> values(n), weights(n);

    // loop to collect each value and its corresponding weight
    for (int i = 0; i < n; i++) {
        cout << "Enter value " << i + 1 << ": ";
        cin >> values[i];   // store the value
        cout << "Enter weight for value " << i + 1 << ": ";
        cin >> weights[i];  // store the weight for that value
    }

    double weightedSum = 0.0;  // sum of (value * weight)
    double totalWeight = 0.0;  // sum of all weights

    // loop through all values to calculate weighted sum and total weight
    for (int i = 0; i < n; i++) {
        weightedSum += values[i] * weights[i]; // multiply value by its weight and add to sum
        totalWeight += weights[i];             // add up all the weights
    }

    // prevent division by zero if all weights are 0
    if (totalWeight == 0) {
        cout << "Total weight cannot be zero." << endl;
        return 1; // exit program with an error code
    }

    // formula: weighted mean = (sum of value*weight) / (sum of weights)
    double weightedMean = weightedSum / totalWeight;
    cout << "Weighted Mean = " << weightedMean << endl; // display the result

    return 0; // program finished successfully
}

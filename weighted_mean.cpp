#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter number of values: ";
    cin >> n;

    vector<double> values(n), weights(n);

    for (int i = 0; i < n; i++) {
        cout << "Enter value " << i + 1 << ": ";
        cin >> values[i];
        cout << "Enter weight for value " << i + 1 << ": ";
        cin >> weights[i];
    }

    double weightedSum = 0.0;
    double totalWeight = 0.0;

    for (int i = 0; i < n; i++) {
        weightedSum += values[i] * weights[i];
        totalWeight += weights[i];
    }

    if (totalWeight == 0) {
        cout << "Total weight cannot be zero." << endl;
        return 1;
    }

    double weightedMean = weightedSum / totalWeight;
    cout << "Weighted Mean = " << weightedMean << endl;

    return 0;
}

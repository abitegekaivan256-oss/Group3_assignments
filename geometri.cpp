#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n;

    cout << "Enter number of values: ";
    cin >> n;

    if (n <= 0) {
        cout << "Number of values must be greater than zero." << endl;
        return 1;
    }

    vector<double> values(n);
    double product = 1.0;

    for (int i = 0; i < n; i++) {
        cout << "Enter value " << i + 1 << ": ";
        cin >> values[i];

        if (values[i] < 0) {
            cout << "Geometric mean cannot be calculated for negative values." << endl;
            return 1;
        }

        product *= values[i];
    }

    double geometricMean = pow(product, 1.0 / n);

    cout << "Geometric Mean = " << geometricMean << endl;

    return 0;
}

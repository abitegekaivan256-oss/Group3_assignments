# Weighted Mean (weighted_mean.cpp)

This program calculates the *weighted mean* of a set of values, where each value can count more or less depending on its assigned weight (unlike a normal average, where every value counts equally).

*Formula:*

Weighted Mean = (Σ value × weight) / (Σ weight)


## Code

cpp
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


## Explanation

### 1. Includes and setup
cpp
#include <iostream>
#include <vector>
using namespace std;

- iostream allows use of cin and cout for input and output.
- vector allows use of dynamic arrays (vector<double>) instead of fixed-size arrays.
- using namespace std; means we don't have to write std::cout, just cout.

### 2. Getting the count
cpp
int n;
cout << "Enter number of values: ";
cin >> n;

Asks the user how many values they want to enter and stores it in n.

### 3. Creating storage
cpp
vector<double> values(n), weights(n);

Creates two lists: one to hold the actual values, and one to hold their corresponding weights, each sized to fit n entries.

### 4. Collecting the data
cpp
for (int i = 0; i < n; i++) {
    cout << "Enter value " << i + 1 << ": ";
    cin >> values[i];
    cout << "Enter weight for value " << i + 1 << ": ";
    cin >> weights[i];
}

Loops n times, asking for a value and its weight each time, storing them in the vectors at position i.

### 5. Calculating the weighted sum and total weight
cpp
double weightedSum = 0.0;
double totalWeight = 0.0;

for (int i = 0; i < n; i++) {
    weightedSum += values[i] * weights[i];
    totalWeight += weights[i];
}

This is the core math:
- weightedSum adds up each value multiplied by its weight.
- totalWeight adds up all the weights.

### 6. Safety check
cpp
if (totalWeight == 0) {
    cout << "Total weight cannot be zero." << endl;
    return 1;
}

Prevents dividing by zero. If all weights are 0, the program stops and shows a warning instead of crashing.

### 7. Final calculation and output
cpp
double weightedMean = weightedSum / totalWeight;
cout << "Weighted Mean = " << weightedMean << endl;

Applies the formula (sum of value×weight ÷ sum of weights) and prints the result.

## Why weighted mean matters
Unlike a normal average where every number counts equally, a weighted mean lets some values count more than others — for example, a final exam might count more toward a grade than a quiz.

#include <iostream>
#include <map>
#include <vector>

int main() {
    int numberOfValues;

    std::cout << "How many values would you like to enter? ";
    std::cin >> numberOfValues;

    if (numberOfValues <= 0) {
        std::cout << "Please enter at least one value.\n";
        return 0;
    }

    std::map<double, int> frequency;
    std::cout << "Enter " << numberOfValues << " values:\n";

    for (int i = 0; i < numberOfValues; ++i) {
        double value;
        std::cin >> value;
        frequency[value]++;
    }

    int highestFrequency = 0;
    for (const auto& item : frequency) {
        if (item.second > highestFrequency) {
            highestFrequency = item.second;
        }
    }

    if (highestFrequency == 1) {
        std::cout << "There is no mode because every value occurs once.\n";
        return 0;
    }

    std::cout << "Mode(s): ";
    for (const auto& item : frequency) {
        if (item.second == highestFrequency) {
            std::cout << item.first << " ";
        }
    }
    std::cout << "\nFrequency: " << highestFrequency << "\n";

    return 0;
}


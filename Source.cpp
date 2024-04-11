#include <iostream>

bool isSortedIncreasing(int values[], int size) {
    for (int i = 1; i < size; ++i) {
        if (values[i] < values[i - 1]) {
            return false;
        }
    }
    return true;
}

bool isSortedDecreasing(int values[], int size) {
    for (int i = 1; i < size; ++i) {
        if (values[i] > values[i - 1]) {
            return false;
        }
    }
    return true;
}

bool hasAdjacentDuplicates(int values[], int size) {
    for (int i = 1; i < size; ++i) {
        if (values[i] == values[i - 1]) {
            return true;
        }
    }
    return false;
}

bool hasDuplicates(int values[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (values[i] == values[j]) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int arr[6];

    // Input integers
    for (int i = 0; i < 6; ++i) {
        std::cout << "Enter integer #" << i << ": ";
        std::cin >> arr[i];
    }

    // Output results
    std::cout << "The data are " << (isSortedIncreasing(arr, 6) ? "increasing" : "not increasing") << "." << std::endl;
    std::cout << "The data are " << (isSortedDecreasing(arr, 6) ? "decreasing" : "not decreasing") << "." << std::endl;
    std::cout << "The data " << (hasAdjacentDuplicates(arr, 6) ? "has" : "does not have") << " adjacent duplicates." << std::endl;
    std::cout << "The data " << (hasDuplicates(arr, 6) ? "has" : "does not have") << " duplicates." << std::endl;

    return 0;
}

#include <iostream>
using namespace std;

#include <iostream>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap the elements if they are in the wrong order
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int unsortedArray[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(unsortedArray) / sizeof(unsortedArray[0]);

    std::cout << "Unsorted array: ";
    for (int i = 0; i < n; ++i) {
        std::cout << unsortedArray[i] << " ";
    }
    std::cout << std::endl;

    bubbleSort(unsortedArray, n);

    std::cout << "Sorted array: ";
    for (int i = 0; i < n; ++i) {
        std::cout << unsortedArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

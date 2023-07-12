#include <iostream>
#include<iomanip>
using namespace std;

double calculateAverage( int arr[], int size) {
    if (size <= 0) {
        return 0.0; // Return 0 if the array is empty or size is invalid
    }

    double sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += arr[i]; // Add each element to the sum
    }

    double average = sum / size; // Calculate the average

    return average;
}

int main() {
    int size;
    cout << "How many numbers would you like to calculate average for? ";
    cin >> size;

    if (size <= 0) {
        cout << "Invalid size!" << endl;
        return 0;
    }

    int numbers[size];

    for (int i = 0; i < size; i++) {
        cout << "Number " << i+1 << ": ";
        cin >> numbers[i];
    }

    double result = calculateAverage(numbers, size);

    cout <<setprecision(1) << fixed << "Average: " << result << endl;

    return 0;
}



#include <stdio.h>

// Function to find the largest number in an array
int findLargest(int arr[], int n) {
    if (n == 1) {
        return arr[0];
    }
    int max = findLargest(arr, n - 1);
    if (arr[n - 1] > max) {
        return arr[n - 1];
    } else {
        return max;
    }
}

int main() {
    int arr[] = {10, 324, 45, 90, 9808};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("The largest number in the array is: %d", findLargest(arr, n));
    return 0;
}
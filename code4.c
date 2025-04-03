#include <stdio.h>

// Function to perform binary search
int binarySearch(int arr[], int low, int high, int x) {
    if (high >= low) {
        int mid = low + (high - low) / 2;

        // If element is present at the middle
        if (arr[mid] == x)
            return mid;

        // If element is smaller, search left subarray
        if (arr[mid] > x)
            return binarySearch(arr, low, mid - 1, x);

        // Else search right subarray
        return binarySearch(arr, mid + 1, high, x);
    }
    return -1; // Element not found
}

int main() {
    int arr[5];  // Declare array of size 5
    int n = sizeof(arr) / sizeof(arr[0]); // n = 5

    printf("Enter 5 sorted elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Input array elements
    }

    int x;
    printf("Enter element to search: ");
    scanf("%d", &x);  // Take search element from user

    int result = binarySearch(arr, 0, n - 1, x);

    if (result == -1)
        printf("Element not found\n");
    else
        printf("Element found at index %d\n", result);

    return 0;
}

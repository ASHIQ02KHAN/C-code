#include <stdio.h>

int binarySearch(int arr[], int low, int high, int key) {
    if (low > high) // Base case
        return -1;
    int mid = (low + high) / 2;
    if (arr[mid] == key) // Key found
        return mid;
    if (key < arr[mid]) // Search left half
        return binarySearch(arr, low, mid - 1, key);
    return binarySearch(arr, mid + 1, high, key); // Search right half
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 7;
    int result = binarySearch(arr, 0, n - 1, key);
    if (result != -1)
        printf("Element %d found at index %d\n", key, result);
    else
        printf("Element %d not found\n", key);
    return 0;
}

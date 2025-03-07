#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n); // Read the number of elements

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Read the array elements
    }

    bubbleSort(arr, n); // Sort the array using Bubble Sort

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]); // Print the sorted array
    }

    return 0;
}

//reverse of an array
#include <stdio.h>

void reverse(int arr[], int rev[], int n) {
    for (int i = 0; i < n; i++) {
        rev[i] = arr[n - 1 - i];
    }
}

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int rev[n];

    for (int i = 0; i < n; i++) {
        printf("Enter element at index %d: ", i);
        scanf("%d", &arr[i]);
    }

    reverse(arr, rev, n);

    printf("Reverse of array is:\n");

    for (int i = 0; i < n; i++) {
        printf("%d\t", rev[i]);
    }

    return 0;
}
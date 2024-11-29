

#include <stdio.h>

#define SIZE 100  // Maximum size of the array

void separateEvenOdd(int arr[], int size, int even[], int *evenSize, int odd[], int *oddSize) {
    *evenSize = 0;
    *oddSize = 0;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            even[(*evenSize)++] = arr[i];
        } else {
            odd[(*oddSize)++] = arr[i];
        }
    }
}

int main() {
    int arr[SIZE], even[SIZE], odd[SIZE];
    int size, evenSize, oddSize;
    
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    separateEvenOdd(arr, size, even, &evenSize, odd, &oddSize);
    
    printf("Even numbers:\n");
    for (int i = 0; i < evenSize; i++) {
        printf("%d ", even[i]);
    }
    
    printf("\nOdd numbers:\n");
    for (int i = 0; i < oddSize; i++) {
        printf("%d ", odd[i]);
    }
    
    return 0;
}

#include <stdio.h>

// 
int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
int main() {
    int arr[] = {3, 4, 5, 6};  // 
    int size = sizeof(arr) / sizeof(arr[0]);  // 

    printf("Factorials of array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("Factorial of %d is %d\n", arr[i], factorial(arr[i]));
    }

    return 0;
}

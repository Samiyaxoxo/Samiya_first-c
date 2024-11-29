
#include <stdio.h>

int main() {
    int n, sum = 0, i = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    while (i <= n) {
        sum += i;
        i++;
    }
    printf("Sum = %d\n", sum);
    return 0;
}

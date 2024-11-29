#include <stdio.h>
int main() {
    int n, isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 2) isPrime = 0;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }
    if (isPrime) printf("%d is a prime number\n", n);
    else printf("%d is not a prime number\n", n);
  printf("kallesh vardi ");
    return 0;
}





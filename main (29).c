
#include <stdio.h>
#include <stdbool.h>

//
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int start, end;
    FILE *file;

    //
    printf("Enter the starting number of the range: ");
    scanf("%d", &start);
    printf("Enter the ending number of the range: ");
    scanf("%d", &end);

    //
    file = fopen("prime_numbers.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    //
    fprintf(file, "Prime numbers between %d and %d:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            fprintf(file, "%d\n", i);
        }
    }

    printf("Prime numbers saved to 'prime_numbers.txt'.\n");

    // 
    fclose(file);

    return 0;
}
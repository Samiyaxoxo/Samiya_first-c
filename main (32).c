
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// 
int isValidPassword(const char *password) {
    int hasUpper = 0, hasLower = 0, hasDigit = 0, hasSpecial = 0;
    int length = strlen(password);

    if (length < 8) {
        printf("Password must be at least 8 characters long.\n");
        return 0;
    }

    for (int i = 0; i < length; i++) {
        if (isupper(password[i])) hasUpper = 1;
        else if (islower(password[i])) hasLower = 1;
        else if (isdigit(password[i])) hasDigit = 1;
        else if (ispunct(password[i])) hasSpecial = 1;
    }

    if (!hasUpper) printf("Password must contain at least one uppercase letter.\n");
    if (!hasLower) printf("Password must contain at least one lowercase letter.\n");
    if (!hasDigit) printf("Password must contain at least one digit.\n");
    if (!hasSpecial) printf("Password must contain at least one special character.\n");

    return hasUpper && hasLower && hasDigit && hasSpecial;
}

int main() {
    char password[100];

    printf("Enter a password to check: ");
    scanf("%s", password);

    if (isValidPassword(password)) {
        printf("Password is valid.\n");
    } else {
        printf("Password is invalid.\n");
    }

    return 0;
}
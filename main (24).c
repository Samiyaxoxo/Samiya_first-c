
#include <stdio.h>

void updateValue(int *ptr, int newValue) {
    *ptr = newValue;  // 
}

int main() {
    int number = 10;  //
    printf("Original value: %d\n", number);

    updateValue(&number, 42);  // 

    printf("Updated value: %d\n", number);

    return 0;
}

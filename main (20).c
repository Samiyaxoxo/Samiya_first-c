
#include <stdio.h>
int main() {
    for (int i = 1; ; i++) {  //
        if (i % 7 == 0) {
            printf("The first multiple of 7 is: %d\n", i);
            break;  //
        }
    }
    return 0;
}

#include <stdio.h>

int main() {
    int number;

    scanf("%d", &number);

    // Using division logic
    if ((number / 2) * 2 == number) {
        printf("Even");
    } else {
        printf("Odd");
    }

    return 0;
}
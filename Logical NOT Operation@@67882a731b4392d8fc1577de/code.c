#include <stdio.h>

int main() {
    int num;

    // Input the number
  
    scanf("%d", &num);

    // Check if the number is not greater than zero
    if (!(num > 0)) {
        printf("False");
    } else {
        printf("True");
    }

    return 0;
}

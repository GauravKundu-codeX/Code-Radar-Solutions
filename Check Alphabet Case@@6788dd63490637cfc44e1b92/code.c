#include <stdio.h>

// char* welcome() {
//     return "Welcome to Code Radar!";
// }

int main() {
    char ch;
    scanf("%c",&c);
    if(ch>='A' && ch<='Z'){
        printf("Uppercase");
    }
    else if (ch >='a' && ch <='z'){
        printf("Lowecase");
    }
    else{
        printf("Not an alphabet");
    }
    // printf("%s", welcome());
    return 0;
}
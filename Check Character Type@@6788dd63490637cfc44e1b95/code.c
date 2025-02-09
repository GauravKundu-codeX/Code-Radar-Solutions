#include <stdio.h>
int main() {

    char ch;

    // Input from user
    scanf("%c", &ch);

    // Check if the character is a vowel
    if ((ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') ||
        (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')) {
        printf("Vowel");
    }
    // Check if the character is a letter (consonant)
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("Consonant");
    }
    // Check if the character is a digit
    else if (ch >= '0' && ch <= '9') {
        printf("Digit");
    }
    // Otherwise, it's a special character
    else {
        printf("Special Character");
    }

    return 0;
}
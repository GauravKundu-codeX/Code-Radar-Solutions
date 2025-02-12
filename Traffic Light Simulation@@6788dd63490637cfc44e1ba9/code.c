// Your code here...
#include <stdio.h>
int main(){
    char input;
    scanf("%c",&input);
    switch(input){
        case 'R':
        printf("Stop");
        break;
        case 'G':
        printf("Go");
        break;
        case 'Y':
        printf("Slow Down");
        break;
        default:
        printf("Invalid inpur");
    }
    return 0;
}
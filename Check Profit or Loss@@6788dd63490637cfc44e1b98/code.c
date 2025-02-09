#include <stdio.h>


int main() {
    int a,b;
    scanf("%d" "%d",&a,&b);
    if(b-a>0){
        printf("Profit");
    }
    else if(b-a==0){
        printf("No profit No Loss");
    }
    else if(b-a<0){
        profit("Loss");
    }
    return 0;
}
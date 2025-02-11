#include <stdio.h>



int main() {
    int a,b;
    char c;
    int res;
    scanf("%d" "%d" "%c",&a,&b,&c);
    if(c=='+'){
        res = a+b;
    }
    else if(c=='-'){
        res = a-b;
    }
    else if(c=='*'){
        resv = a*b;
    }
    else if(c=='/'){
       if(b==0){
        printf("Invalid");
       }
       else{
        res = a/b;
       }
    }
    printf("%d",res);
    return 0;
}
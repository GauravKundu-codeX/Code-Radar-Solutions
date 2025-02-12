// Your code here...
#include <stdio.h>

int main(){
    int a;
    int isPrime=0;
    scanf("%d",&a);
    for(int i=2;i<a,i++;){
        if(a%i==0){
            isPrime = 0;
            break;
        }   
    }
    if(isPrime){
        printf("Not Prime");
    }
    else{
        printf("Prime");
    }
    return 0;
}
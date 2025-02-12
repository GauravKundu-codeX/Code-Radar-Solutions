// Your code here...
#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    for(int i=2,i<a,i++;){
        if(a%i==0){
            print("Not Prime");
            break;
        }
        else{
            print("Prime");
        }
    }
    return 0;
}
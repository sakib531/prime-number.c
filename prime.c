#include<stdio.h>

int main (){
    int n,x,sum=0;
    printf("input the value : ");
    scanf("%i",&n);
    for(x=2;x<n;x++){
        if(n%x==0){
            printf("it's not a prime number");
            sum=1;
            break;
        }
    }
    if(sum==0){
        printf("it's a prime");
    }
    return 0;
}

#include<stdio.h>

int main(){
    int n,fac=1,i=1;
    printf("Enter a number: \n");
    scanf("%d", &n);
    
    printf("The factorial of entered number is: ");
    
    while(i<=n){
          fac *= i;
          i++;
    }
    printf("%d", fac);
    return 0;
}
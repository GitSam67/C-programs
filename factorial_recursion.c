#include<stdio.h>

int factorial(num){
    if(num==0 || num==1){
        return 1;
    }else{
        return num*factorial((num-1));
    }
}

int main(){
    int n;
    printf("Enter a number: \n");
    scanf("%d", &n);
    printf("The factorial of entered number is: ");
    int m = factorial(n);
    printf("%d", m);
    return 0;
}
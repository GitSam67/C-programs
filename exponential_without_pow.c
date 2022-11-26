#include<stdio.h>

int main(){
    int b,p;
    long long int pow=1;
    printf("Enter the base of a number \n");
    scanf("%d", &b);
    printf("Enter the power of that number \n");
    scanf("%d", &p);
    printf("The result of this expression is ");
    for(int i=1; i<=p; i++){
        pow *= b; 
    }printf("%lld", pow);
    return 0;
}
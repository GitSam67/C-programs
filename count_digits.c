#include<stdio.h>

int main(){
    int n,count=0;
    printf("Enter a number \n");
    scanf("%d", &n);
    int i=0;
    if(n==0){
        printf("The total number of digits in your number is only 1");
    }else{
    while(n!=0){
        n = n/10;
        count++;
        i++;
    }printf("The total number of digits in your number is %d", count);
    }
    return 0;
}
#include<stdio.h>

int main(){
    int n,prime=1;
    printf("Enter a number\n");
    scanf("%d", &n);
    for(int i=2; i<n; i++){
        if(n%i==0){
            prime = 0;
            break;
        }
    }if(prime==0){
        printf("The entered number is not a prime number\n");
    }
    else if(n==1){
        printf("The entered number is neither a prime nor a composite number\n");
    }
    else{
        printf("The entered number is a prime number\n");
    }
    return 0;
}
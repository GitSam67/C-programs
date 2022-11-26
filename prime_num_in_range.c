#include<stdio.h>

int isPrime(int n){
    int prime=1;

    for(int i=2; i<n; i++){
        if(n%i==0){
            prime=0;
            break;
        }
    }if(prime==0){
        
    }else{
        printf("%d ", n);
        
    }
}

int main(){
    int n1,n2,count=0;
    printf("Enter the number from which the range starts:\n");
    scanf("%d", &n1);
    printf("Enter the number upto which the range stops:\n");
    scanf("%d", &n2);
    
    printf("The list of prime numbers in the entered range is :\n");
    int i;
    for(int i=n1; i<=n2; i++){
       if(isPrime(i)){
           count++;
       }
       
    }printf("\n");
    printf("The total number of prime numbers in this range is %d", count);
    return 0;
}
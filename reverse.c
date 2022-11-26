#include<stdio.h>

int main(){
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    int m[10],i=0;
    printf("The reverse of entered number is ");
    if(n==0){
        printf("0");
    }else{

    }
    while(n!=0){
        m[i] = n - (n/10)*10;
        n = n/10;
        i++;
    }
    for(int j=0; j<i; j++){
        printf("%d", m[j]);
    }
    
    return 0;
}
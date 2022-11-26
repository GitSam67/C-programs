#include<stdio.h>

int main(){
    int num,rem,a[100];
    printf("Enter a number and i will convert that number to binary format\n");
    scanf("%d", &num);
    printf("The binary conversion of this number is ");
    if(num==0){
        printf("0");
    }else{
        
    }
    int i=0;
    while(num!=0){
        rem = num%2;
        num = num/2;
        a[i] = rem;
        i++;
    }  
        int m = i - 1; 
        
        
        for(int i=m; i>=0; i--){
            printf("%d", a[i]);
        }
        
    return 0;
}
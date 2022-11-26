#include<stdio.h>
#include<math.h>

int main(){
    int base;
    start:
    printf("Enter the base you wanna convert :\n");
    scanf("%d", &base);
    if(base==2){
        int n,r,b=0,i=0;
        printf("Enter binary number:\n");
        scanf("%d",&n);
        
        printf("The decimal equivalent of %d is : ", n);
        while(n!=0){
            r = n%10;
            b += r*pow(2,i);
            n = n/10;
            i++;
        }
        printf("%d", b);

        printf("The octal equivalent of %d is : ", n);
        while(n!=0){
            i=0;
            for(int j=0;j<3;j++){
            r = n%10;
            b += r*pow(2,i);
            n = n/10;
            i++;
        }
        printf("%d", b);
    }
    }
    else if(base==8){
        
    }
    else if(base==10){
        
    }
    else if(base==16){
        
    }
    else{
        printf("Invalid Base !! Pls enter once again\n");
        goto start;
    }
    return 0;
}
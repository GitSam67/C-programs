#include<stdio.h>

int main(){
    int n,k=1,x=65;
    char c;
    printf("Enter the number of rows in character(A-Z):\n");
    scanf("%c",&c);
    for(int i=0;i<=25;i++){
        if(c==(char)x){
            n=i+1;
            break;
        }x++;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*n-1;j++){
            if(i+j<=n || j-i>=n){
                printf(" ");
            }else{
                if(j>n){
                k=k-2;
                printf("%c",64+k);
                k++;
            }else{
                printf("%c",64+k);
                k++;
            }
            }
        }printf("\n");
        k=1;
    }
    return 0;
}
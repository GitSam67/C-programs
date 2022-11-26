#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of lines for star pattern: \n");
    scanf("%d", &n);
     for(int k=0;k<=n;k++){
        for(int i=0; i<=n; i++){
            for(int j=0; j<2*(n+1)-1; j++){
                if(j<=n+i && j>=n-i){  
                    printf("*");
                }else if(j>n+i){
                    printf(".");
                }
                else{
                    printf(" ");
                }
            }
        }
        for(int i=n; i>=0; i--){
            for(int j=0; j<2*(n+1)-1; j++){
                if(j<=n+i && j>=n-i){
                    printf("*");
                }else if(j>n+i){
                    printf(".");
                }
                else{
                    printf(" ");
                }
            }
        }if(k==n/2)
         printf("\n");
    }
    return 0;
}
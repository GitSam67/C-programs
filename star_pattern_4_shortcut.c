#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of lines for star pattern: \n");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
           if(i==j || j>i){
               printf("*");
           }else{
               printf(" ");
           }
               
         }printf("\n");
    }
    return 0;
}
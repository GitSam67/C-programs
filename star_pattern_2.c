#include<stdio.h>

//    *
//   **
//  ***
// ****
int main(){
    int n;
    printf("Enter the line of star pattern:\n");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int k=n; k>i; k--){
            printf(" ");
        }
        for(int j=1; j<=i; j++){
            printf("*");
        }
        
         printf("\n");   
    }
    return 0;
}
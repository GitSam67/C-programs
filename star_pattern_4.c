#include<stdio.h>

// ****
//  ***
//   **
//    *
int main(){
    int n;
    printf("Enter the number of lines for star pattern: \n");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<i; j++){
            printf(" ");
        }
        for(int k=n; k>=i; k--){
            printf("*");
        }printf("\n");
    }
    return 0;
}
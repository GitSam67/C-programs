#include<stdio.h>

// 1111
//  222
//   33
//    4
int main(){
    int n;
    printf("Enter the number of lines for number pattern: \n");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
           if(j>=i){
                printf("%d", i);
           }else{
                printf(" ");
        }
        
        }printf("\n");
    }
    return 0;
}
#include<stdio.h>
#include<math.h>

int main(){
    int n,i=0,l=0,rem[100];
    printf("Enter a number:\n");
    scanf("%d",&n);
    while(n!=0){
        rem[i]=n%2;
        n=n/2;
        i++;
        l++;
    }printf("The binary equivalent of %d is:",n);
    for(int i=l-1;i>=0;i--){
        printf("%d",rem[i]);
    }
    return 0;
}
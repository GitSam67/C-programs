#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,a[100],x;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    printf("Enter elements of array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }printf("Before operating:\n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }printf("\nAfter operation:\n");
    x=a[n-1];
    for(int i=n-2;i>=0;i--){
        a[i+1]=a[i];
    }a[0]=x;
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
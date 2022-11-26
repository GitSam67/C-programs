#include<stdio.h>

int main(){
    int a[100][100],b[100][100],r,c;
    printf("Enter Rows for an array:\n");
    scanf("%d",&r);
    printf("Enter Cols for the array:\n");
    scanf("%d",&c);
    printf("Enter values for the array:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        scanf("%d",&a[i][j]);
        }
    }for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        b[i][j]=1;
        }
    }printf("After Product:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            for(int k=0;k<c;k++){
        if(j!=k){
            b[i][j]*=a[i][k];
        }
        }printf("%d ",b[i][j]);
        
    }printf("\n");
    }

    return 0;
}
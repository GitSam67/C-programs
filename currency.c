#include<stdio.h>

int main(){
    int T,m[1000],t=0,c=0,n[6];
    n[0]=1,n[1]=2,n[2]=5,n[3]=10,n[4]=50,n[5]=100;
    printf("Input:\n");
    printf("Enter no. of testcases:\n");
    scanf("%d",&T);
    printf("Enter Amount/s:\n");
    for(int i=0;i<T;i++){
        scanf("%d",&m[i]);
    }
    printf("Output:\n");
    for(int z=0;z<T;z++){
        for(int i=5;i>=0;i--){
            t+=n[i];           
            while(t<=m[z]){
                c++;
                t+=n[i];
            }t-=n[i];
        }
        printf("%d ",c);
        c=0;
        t=0;
    }
    return 0;
}
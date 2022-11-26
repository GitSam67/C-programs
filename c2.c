#include<stdio.h>
#include<math.h>

int main(){
    int t,n,k,c=0,a[100],b[100];
    printf("Enter no. of testcases:\n");
    scanf("%d",&t);
    while(t--){
        printf("Enter n and k:\n");
        scanf("%d %d",&n,&k);
        for(int i=0;i<n;i++){
            a[i]=i+1;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(abs(a[j]-(i+1))==k){
                    b[i]=a[j];
                    c++;
                    
                }
             }
        }
        if(c==n){
            for(int i=0;i<n;i++){
                printf("%d ",b[i]);
            }
        }else{
            printf("-1");
        }c=0;
        printf("\n");
    }
    return 0;
}
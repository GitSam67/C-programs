#include<stdio.h>
#include<math.h>

int main(){
    int a[100],n,max=0,x,count=0,r=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max = a[i];
        }
    }
    for(int x=1;x<=max;x++){
        for(int i=0;i<n;i++){
            if(a[i]%x==0){
               
            }else{
                r=1;
                break;
            }
            
        }
        if(r==0){
            count++;
        } r=0;
    }
    printf("%d", count);
    return 0;
}
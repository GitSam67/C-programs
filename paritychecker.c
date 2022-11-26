#include<stdio.h>

int main(){
    int n=0,a[5],count=0,p;
    printf("Enter the binary sequence\n");
    for(int i=0;i<4;i++){
        scanf("%d", &a[i]);
        n++;
    }
    for(int i=0;i<4;i++){
        if(a[i]==1){
            count++;
        }
    }
    if(count%2==0){
        printf("Even parity\n");
        printf("Enter 1 if you want to make binary sequence odd parity and 0 if even parity !!");
        scanf("%d", &p);
        if(p==1){
            a[4] = 1;
        }
        else{
            a[4] = 0;
        }
    }
    else{
        printf("Odd parity\n");
        printf("Enter 1 if you want to make binary sequence odd parity and 0 if even parity !!");
        scanf("%d", &p);
        if(p==1){
            a[4] = 0;
        }
        else{
            a[4] = 1;
        }
    }
    for(int i=0;i<5;i++){
        printf("%d",a[i]);
    }
    return 0;
}
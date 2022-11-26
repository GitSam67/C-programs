#include<stdio.h>

int main(){
    for(int i=2;i<1000000;i++){
        for(int j=2;j<i;j++){
            if((i*i + i + 41)%j==0){
                printf("%d Not prime!!",i);
                return 1;
            }
        }
        
    }
    printf("Is Prime!!");
    return 0;
}
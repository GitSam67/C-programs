#include<stdio.h>

int main(){
    int t,p[t],count=0,j=0;
    printf("Enter the number of testcases\n");
    scanf("%d", &t);
    printf("Enter the points won\n");
    for(int i=0;i<t;i++){
        scanf("%d", &p[i]);
    }
    printf("Output:\n");
    while(t>0){
        for(int i=0;i<=p[j];i++){
            if(i%2==0){
                count++;
            }
        }
        printf("%d\n",count);
        count = 0;
        t--;j++;
    }
    return 0;
}
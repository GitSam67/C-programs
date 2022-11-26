#include<stdio.h>

int main(){
    char str[100];
    int n,count=0;;
    printf("Enter the size of string:\n");
    scanf("%d",&n);
    printf("Enter the values size of string:\n");
    scanf("%s",str);
    for(int i=0;i<n-1;i++){
        if((str[i]=='0'&&str[i+1]=='1') || (str[i]=='1'&&str[i+1]=='0')){
            i++;
            count++;
        }
    }if(count==0)
    printf("-1");
    printf("%d",count);

    return 0;
}
#include<stdio.h>
#include<string.h>

int main(){
    int pal = 1;
    int num = 0;
    char str[100];
    printf("Now i will tell you that your entered word is palindrome or not!!\n");
    printf("Enter any word\n");
    gets(str);

    int n = strlen(str);
    
    for(int i=0; i<n/2; i++){
        if(str[i]==str[n-i-1]){
           num++; 
        }
        
    }if(num==n/2){
        printf("The entered word is palindrome!!\n");
    }else{
        printf("The entered word is not palindrome!!\n");
    }
    return 0;
}
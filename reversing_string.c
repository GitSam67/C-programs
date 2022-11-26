#include<stdio.h>
#include<string.h>

int main(){
    char str[] = "samanuay";
    char swap;

    printf("Enter a string:\n");
    gets(str);
    int n = strlen(str);
    printf("The reverse is: ");
    
    for(int i=0; i<n/2; i++){
        swap = str[n-i-1];
        str[n-i-1] = str[i];
        str[i] = swap;
    }
   printf("%s", str);
    return 0;
}
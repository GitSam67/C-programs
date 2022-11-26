#include<stdio.h>
#include<string.h>

void reverse(char *s, int n){
printf("Now the reveresed string is ");
    char *swap;
    for(int i=0; i<4; i++){
        swap[i] = s[8-i-1];
        s[8-i-1] = s[i];
        s[i] = swap[i];
        
    }
}
int main(){
    char str[] = "Samanuay";
    printf("The string is %s\n", str);

    reverse(str, 8);
    for(int i=0; i<8; i++){
        printf("%c", str[i]);
    }    
    return 0;

}
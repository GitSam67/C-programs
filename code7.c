#include<stdio.h>

int main(){
    char c;
    FILE *fptr;
    fptr = fopen("Samanuay.txt","r");
    while(c!=EOF){
        c=fgetc(fptr);
        printf("%c",c);
    }
    fclose(fptr);
    return 0;
}
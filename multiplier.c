#include<stdio.h>

int main(){
    FILE *ptr;
    int num;
    ptr = fopen("f.txt", "r");
    fscanf(ptr, "%d", &num);
    ptr = fopen("f.txt", "w");
    fprintf(ptr,"%d", num*2);
    fclose(ptr);
    return 0;
}
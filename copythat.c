#include<stdio.h>

int main(){
    FILE *ptr1;
    FILE *ptr2; 
    
    ptr1 = fopen("a.txt","r");
    char c = fgetc(ptr1);
    
    
    ptr2 = fopen("b.txt","w");
    for(int i=0; i<2; i++){
        while(c!=EOF){
       fprintf(ptr2,"%c",c);
       c = fgetc(ptr1);
       }fprintf(ptr2,"\n");
    }   
    
    fclose(ptr1);
    fclose(ptr2);
    return 0;
}
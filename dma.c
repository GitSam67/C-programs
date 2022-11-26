#include<stdio.h>
#include<stdlib.h>

int main(){
    // Using malloc:
    int *ptr = (int *)malloc(5*sizeof(int));
    for(int i=0;i<5;i++){
        scanf("%d", ptr+i);
    }
    printf("Using malloc:\n");
    for(int i=0;i<5;i++){
        printf("%d ", *(ptr+i));
    }printf("\n");
    
    // Using calloc:
    int *p = (int *)calloc(5,sizeof(int));
    for(int i=0;i<5;i++){
        scanf("%d", p+i);
    }
    printf("Using calloc:\n");
    for(int i=0;i<5;i++){
        printf("%d ", *(p+i));
    }printf("\n");  
    
    // Using realloc:
    ptr = realloc(ptr,10*sizeof(int));
    for(int i=5;i<10;i++){
        scanf("%d", ptr+i);
    }
    printf("Using realloc:\n");
    for(int i=0;i<10;i++){
        printf("%d ", *(ptr+i));
    }
    // Using free:
    free(ptr);
    free(p);
    return 0;
}
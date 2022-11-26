#include<stdio.h>
// Call by reference
void swap(int* x,int* y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    printf("a=%d and b=%d\n",*x,*y);
    *x=2,*y=9;
    
}

int main(){
    int a=7,b=6;
    printf("Before swapping:\n");
    printf("a=%d and b=%d\n",a,b);
    printf("After swapping:\n");
    swap(&a,&b);
    printf("a=%d and b=%d",a,b);
    return 0;
}
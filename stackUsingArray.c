#include<stdio.h>

int top=-1,stack[10],size=10;

void push(int value){
    if(top==size-1){
        printf("Stack Overflow!!\n");
    }else{
    top++;
    stack[top] = value;
    printf("Value inserted %d\n",value);
    }
}
void pop(){
    int value;
    if(top==-1){
        printf("Stack Underflow!!\n");
    }else{
    value = stack[top];
    top--;
    printf("Value deleted %d\n",value);
    }
}
void display(){
    for(int i=top;i>=0;i--){
        printf("%d\n",stack[i]);
    }
}
int main(){
    push(7);
    push(10);
    push(20);
    push(25);
    // pop();
    // pop();
    // pop();
    // pop();
    display();
    return 0;
}
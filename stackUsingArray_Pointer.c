#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;
};

int isFull(struct stack* ptr){
    if(ptr->top == ptr->size-1){
        return 1;
    }else{
        return 0;
    }
}
int isEmpty(struct stack* ptr){
    if(ptr->top == -1){
        return 1;
    }else{
        return 0;
    }
}
int push(struct stack* ptr, int value){
    if(isFull(ptr)){
        printf("Stack Overflow!!");
        return -1;
    }else{
        ptr->top++;
        ptr->arr[ptr->top] = value;
        printf("Value inserted %d\n",value);
    }
}
int pop(struct stack* ptr){
    if(isEmpty(ptr)){
        printf("Stack Underflow!!");
        return -1;
    }else{
        int value;
        value = ptr->arr[ptr->top];
        ptr->top--;
        return value;
    }
}
int main(){
    struct stack* sp = (struct stack *)malloc(sizeof(struct stack));
    sp->top=-1;
    sp->size = 10;
    sp->arr = (int *)malloc(sp->size*sizeof(int));
    printf("%d\n", isFull(sp));
    printf("%d\n", isEmpty(sp));
    push(sp,7);
    push(sp,6);
    push(sp,15);
    push(sp,20);
    push(sp,25);
    push(sp,30);
    push(sp,36);
    push(sp,42);
    push(sp,57);
    push(sp,67);
    printf("Value %d popped\n",pop(sp));
    printf("Value %d popped\n",pop(sp));
    printf("Value %d popped\n",pop(sp));
    printf("Value %d popped\n",pop(sp));
    printf("Value %d popped\n",pop(sp));
    printf("Value %d popped\n",pop(sp));
    printf("Value %d popped\n",pop(sp));
    printf("Value %d popped\n",pop(sp));
    printf("Value %d popped\n",pop(sp));
    printf("Value %d popped\n",pop(sp));
    
    return 0;
}
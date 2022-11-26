#include<stdio.h>
#include<stdlib.h>
#include<math.h>

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
    }
}
int pop(struct stack *ptr){
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
int op(char s){
    if(s>='0' && s<='9'){
        return 7;
    }
}
int o(char s){
    if(s=='+'){
        return 1;
    }
    else if(s=='-'){
        return 2;
    }
    else if(s=='*'){
        return 3;
    }
    else if(s=='/'){
        return 4;
    }
    else if(s=='^'){
        return 5;
    }
}
int main(){
    struct stack* sp = (struct stack *)malloc(sizeof(struct stack));
    sp->top=-1;
    sp->size = 100;
    sp->arr = (int *)malloc(sp->size*sizeof(int));
    int i=0,x,y,res,n;
    char str[100];
    printf("Enter a Postfix string:\n");
    scanf("%s",str);
    
    printf("The Postfix evaluation for %s is:\n",str);
    while(str[i]!='\0'){
        if(op(str[i])==7){
            n = (int)str[i]-48;
            push(sp,n);
        }
        else{
            if(o(str[i])==1){
                x=pop(sp);
                y=pop(sp);
                res=y+x;
                push(sp,res);
            }
            else if(o(str[i])==2){
                x=pop(sp);
                y=pop(sp);
                res=y-x;
                push(sp,res);
            }
            else if(o(str[i])==3){
                x=pop(sp);
                y=pop(sp);
                res=y*x;
                push(sp,res);
            }
            else if(o(str[i])==4){
                x=pop(sp);
                y=pop(sp);
                res=y/x;
                push(sp,res);
            }
            else if(o(str[i])==5){
                x=pop(sp);
                y=pop(sp);
                res=pow(y,x);
                push(sp,res);
            }
        }
        i++;
    }
    printf("%d",pop(sp));
    return 0;
}
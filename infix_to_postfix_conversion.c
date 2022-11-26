#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    char *arr;
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
int push(struct stack* ptr, char value){
    if(isFull(ptr)){
        printf("Stack Overflow!!");
        return -1;
    }else{
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}
int pop(struct stack* ptr){
    if(isEmpty(ptr)){
        printf("Stack Underflow!!");
        return -1;
    }else{
        char value;
        value = ptr->arr[ptr->top];
        ptr->top--;
        if(value=='('){
        }else{
        printf("%c",value);
        }
    }
}
int p(char x){
    if(x=='^'){
        return 3;
    }
    else if(x=='*' || x=='/'){
        return 2;
    }
    else if(x=='+' || x=='-'){
        return 1;
    }
    else{
        return -1;
    }
}

int o(char c){
    if(c>='A' && c<='Z'){
        return 5;
    }
    if(c=='+' || c=='-' || c=='*' || c=='/' || c=='^' || c=='(' || c==')'){
        return 6;
    }
}
int main(){
    struct stack* sp = (struct stack *)malloc(sizeof(struct stack));
    sp->top=-1;
    sp->size = 100;
    sp->arr = (char *)malloc(sp->size*sizeof(char));
    int i=0;
    char str[100];
    printf("Enter an infix string:\n");
    scanf("%s",&str);

    printf("The Postfix expression for %s is:\n",str);
    while(str[i]!='\0'){
        if(o(str[i])==5){
            printf("%c",str[i]);
        }
        else if(str[i]=='('){
            push(sp,str[i]);
        }
        else if(str[i]==')'){
            while(sp->arr[sp->top]!='('){
                pop(sp);
            }pop(sp);
        }
        else if(p(str[i])>p(sp->arr[sp->top])){
            push(sp,str[i]);
        }
        else{
            while(p(str[i])<=p(sp->arr[sp->top])){
                pop(sp);
            }push(sp,str[i]);
        }
        i++;
    }
    while(sp->top!=-1){
        pop(sp);
    }
    return 0;
}
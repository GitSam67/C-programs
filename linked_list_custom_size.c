#include<stdio.h>
#include<stdlib.h>

struct node * head,* newnode,* temp;

struct node {
    int data;
    struct node * next;
};

void linked_list(int value, int i, int n){
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = value;
    if(i==1){
    head = newnode;
    temp = newnode;
    }
    if(i!=1){
    temp->next = newnode;
    temp = newnode;
    if(i==n)
    temp->next = NULL;
    }
}

void linked_list_traversal(struct node * head){
    temp = head; 
    while(temp!= NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main(){
    int n,val;
    printf("Enter the number of nodes you want in linked list:\n");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        printf("Enter value of node %d\n",i);
        scanf("%d", &val);
        linked_list(val,i,n);
    }
    printf("The elements of linked list are !!\n");
    linked_list_traversal(head);
    return 0;
}
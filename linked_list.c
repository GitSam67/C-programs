#include <stdio.h>
#include<stdlib.h>

// Linked List Implementation:

struct Node
{
    int data;
    struct Node *next;
};

void displayLinkedList(struct Node* ptr){
       while(ptr!=NULL){
           printf("%d ", ptr->data);
           ptr = ptr->next;
       } 
}

struct Node* insertAtFirst(struct Node* head, int data){
       struct Node* p = (struct Node*)malloc(sizeof(struct Node));
       p->next = head;
       p->data = data;
       
       return p;
}
struct Node* insertAtIndex(struct Node* head, int data, int index){
       int i=0;
       struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
       struct Node* p = (struct Node*)malloc(sizeof(struct Node));
       ptr = head;
       while(i!=index-1){
           ptr = ptr->next;
           i++;
       }
       p->data = data;
       p->next = ptr->next;
       ptr->next = p;
       
       
       return head;
}
struct Node* insertAtEnd(struct Node* head, int data){
       struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
       struct Node* p = head;
       while(p->next!=NULL){
           p = p->next;
       }
       ptr->data = data;
       p->next = ptr;
       ptr->next = NULL;
       
       
       return head;
}
struct Node* insertAfterNode(struct Node* head, struct Node* prevnode, int data){
       struct Node* p = (struct Node*)malloc(sizeof(struct Node));
       p->data = data;
       p->next = prevnode->next;
       prevnode->next = p;       
       
       return head;
}
struct Node* deletionAtFirst(struct Node* head){
       struct Node* p = head;
       head = head->next;
       free(p);
       return head;
}
struct Node* deletionAtIndex(struct Node* head, int index){
       struct Node *ptr = head; 
       struct Node* p = head->next;
       for(int i=0;i<index-1;i++){
         ptr = ptr->next;
         p = p->next;
       }
       ptr->next = p->next;
       free(p);
       return head;
}
struct Node* deletionAtEnd(struct Node* head){
       struct Node *ptr = head; 
       struct Node* p = head->next;
       while(p->next!=NULL){
              p = p->next;
              ptr = ptr->next;
       }
       ptr->next = NULL;
       free(p);
       return head;
}
struct Node* deletionAtValue(struct Node* head, int value){
       struct Node *ptr = head; 
       struct Node* p = head->next;
       while(p->data!=value && p->next!=NULL){
              p = p->next;
              ptr = ptr->next;
       }
       if(p->data==value){
              ptr->next = p->next;
              free(p);
       }
       
       return head;
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;
    second->data = 10;
    second->next = third;
    third->data = 15;
    third->next = fourth;
    fourth->data = 20;
    fourth->next = NULL;

     displayLinkedList(head);
     printf("\n");
     head = insertAtIndex(head, 20, 2);
     displayLinkedList(head); 
    return 0;
}
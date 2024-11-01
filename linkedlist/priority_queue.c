#include <stdio.h>
#include <stdlib.h>


// Each node in the list stores a value and its priority, and the nodes are sorted based on priority. Elements with higher priority will be closer to the head of the list.


// Insertion ensures the elements are ordered based on their priority.
// Deletion will remove the highest-priority element (head of the list).
// We can peek to check the element with the highest priority.

struct Node{
  int data;
  int priority;
  struct Node * next;
};

void enqueue(struct Node ** head,int data,int priority){
    struct Node * newnode=(struct Node *)malloc(sizeof(struct Node));
    newnode->data=data;
    newnode->priority=priority;
    newnode->next=NULL;
    
    if(*head==NULL){
        *head=newnode;
        return;
    }
    
    if(newnode->priority>(*head)->priority){
        newnode->next=*head;
        (*head)=newnode;
        return;
    }else{
        struct Node * curr=*head;
        
        while((curr->next)!=NULL && (curr->next)->priority>newnode->priority){
            curr=curr->next;
        }
        
        newnode->next=curr->next;
        curr->next=newnode;
        return;
    }
    
}

void dequeue(struct Node **head){
    if((*head)==NULL){
        printf("Empty LL\n");
        return;
    }
    
    *head=(*head)->next;
}

void traversal(struct Node * head){
    if(head==NULL){
        printf("Empty LL\n");
    }else{
         struct Node * curr=head;
         
         while(curr){
             printf("(%d,%d)->",curr->data,curr->priority);
             curr=curr->next;
         }
         
         printf("NULL\n");
    }
}

void peek(struct Node * head){
    if(head==NULL){
        printf("Empty LL\n");
    }else{
        printf("Element with max priority is %d with %d priority",head->data,head->priority);
    }
}


int main(){
    struct Node* head;
    head=NULL;
    
    enqueue(&head,10,8);
    enqueue(&head,3,18);
    enqueue(&head,30,11);
    enqueue(&head,9,1);
    traversal(head);
    dequeue(&head);
    traversal(head);
    peek(head);
    return 0;
}
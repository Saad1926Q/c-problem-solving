#include <stdio.h>
#include <stdlib.h>

//Write a C program to implement Circular Linked List Creation and Traversal

struct Node{
    int data;
    struct Node* next;
};

void traversal(struct Node* head){
    if(head==NULL){
        printf("Empty Linked List\n");
        return;
    }
    
    struct Node*ptr=head;
    
    do{
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }while(ptr!=head);
    
    printf("HEAD\n");
}

void insertAtEnd(struct Node **head,int val){
    struct Node *newNode=(struct Node *)malloc(sizeof(struct Node));
    
    struct Node* ptr = *head;
    
    newNode->data=val;
    newNode->next=*head;
    
    if(*head==NULL){
        *head=newNode;
        newNode->next=*head;
    }else{
        while(ptr->next!=*head){
            ptr=ptr->next;
        }
        
        ptr->next=newNode;
        newNode->next=*head;
    }
}



int main(){
    struct Node* head;
    struct Node* second;
    
    head=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    
    head->data=12;
    head->next=second;
    
    second->data=17;
    second->next=head;
    
    insertAtEnd(&head,10);
    
    traversal(head);
}
#include <stdio.h>
#include <stdlib.h>

//Write a C program to insert elements into Linked List

struct Node{
    int data;
    struct Node* next;
};

void traversal(struct Node *ptr){
    while(ptr!=NULL){
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }
    printf("NULL\n");
}

void insertAtBeginning(struct Node **head_ref,int newdata){
    struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
    
    new_node->data=newdata;
    
    new_node->next=*head_ref;
    
    *head_ref=new_node;
}

void insertAtEnd(struct Node* head,int newdata){
    struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
    
    new_node->data=newdata;
    
    struct Node* ptr=head;
    
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    
    ptr->next=new_node;
    new_node->next=NULL;
}

void insertAfterNode(struct Node* head,int targetNode,int newdata){
    struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
    
    new_node->data=newdata;
    
    struct Node* ptr=head;
    
    while(ptr->data!=targetNode){
        ptr=ptr->next;
    }
    
    struct Node* temp=ptr->next;
    ptr->next=new_node;
    new_node->next=temp;
}


int main(){
    struct Node* head;
    struct Node* second;
    struct Node* third;
    head=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));
    
    head->data=12;
    head->next=second;
    
    second->data=17;
    second->next=third;
    
    third->data=8;
    third->next=NULL;
    
    traversal(head);
    
    insertAtEnd(head,17);
    
    traversal(head);
    
    insertAfterNode(head,17,2);
    
    traversal(head);
}
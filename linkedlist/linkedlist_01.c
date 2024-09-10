#include <stdio.h>
#include <stdlib.h>

//Write a C program to implement Linked List Creation and Traversal

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
}
#include <stdio.h>
#include <stdlib.h>

//Write a C program to implement Queue using Linked List

//Concept 
//While initializing f(front)=r(rear)=NULL
//empty condition => f == NULL
//full condition => when heap memory is exhausted


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

int isEmpty(struct Node* f){
    if(f==NULL){
        return 1;
    }else{
        return 0;
    }
}

int isFull(){
    struct Node *n=(struct Node*)malloc(sizeof(struct Node));
    if(n==NULL){
        return 1;
    }else{
        return 0;
    }
}

void enqueue(struct Node **f,struct Node **r,int val){
    if(isFull()==1){
        printf("Queue is full\n");
    }else{
        struct Node *n=(struct Node *)malloc(sizeof(struct Node));
        n->data=val;
        n->next=NULL;
        if(isEmpty(*f)==1){
            *f=*r=n;
        }else{
            (*r)->next=n;
            *r=n;
        }
    }
}

void dequeue(struct Node **f){
    struct Node *ptr=*f;
    if(isEmpty(*f)==1){
        printf("Queue is empty\n");
    }else{
        *f=(*f)->next;
        free(ptr);
    }
}

int main(){
    struct Node *f;
    struct Node *r;
    f=r=NULL;
    
    enqueue(&f,&r,10);
    enqueue(&f,&r,8);
    traversal(f);
    dequeue(&f);
    traversal(f);
}
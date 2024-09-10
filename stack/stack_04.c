#include <stdio.h>
#include <stdlib.h>

//Write a C program to implement Stack using Linked List

//Concept 
//While initializing top = NULL
//stack empty condition => top == NULL
//stack full condition => when heap memory is exhausted

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

int isEmpty(struct Node* top){
    if(top==NULL){
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

void push(struct Node** top_ref,int val){
    if(isFull()==1){
        printf("Stack Overflow\n");
    }else{
        struct Node *n=(struct Node*)malloc(sizeof(struct Node));
        n->data=val;
        n->next=*top_ref;
        *top_ref=n;
    }
}

void pop(struct Node**top_ref){
    if(isEmpty(*top_ref)==1){
        printf("Underflow\n");
    }else{
        struct Node *n=*top_ref;
        *top_ref=(*top_ref)->next;
        free(n);
    }
}


int main(){
    struct Node *top=NULL;
    push(&top,12);
    push(&top,11);
    push(&top,78);
    pop(&top);
    traversal(top);
}
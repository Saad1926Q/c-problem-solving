#include <stdio.h>
#include <stdlib.h>

//Write a C program to implement Doubly Linked List

struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
};

void traversal(struct Node * head){
    if(!head){
        printf("Empty LL\n");
        return;
    }
    
    struct Node* curr=head;
    
    while(curr){
        printf("%d->",curr->data);
        curr=curr->next;
    }
    
    printf("NULL\n");
}

void traversalReverse(struct Node * tail){
    if(!tail){
        printf("Empty LL\n");
        return;
    }
    
    struct Node* curr=tail;
    
    while(curr){
        printf("%d->",curr->data);
        curr=curr->prev;
    }
    
    printf("NULL\n");
}

struct Node * insertAtHead(struct Node * head,struct Node ** tail,int val,int * size){
    struct Node * node=(struct Node *)malloc(sizeof(struct Node));
    node->data=val;
    node->next=NULL;
    node->prev=NULL;
    
    if(!head){
        *size=(*size)+1;
        *tail=node;
        return node;    
    }
    
    node->next=head;
    head->prev=node;
    *size=(*size)+1;
    
    return node;
}

struct Node * insertAtEnd(struct Node ** head,struct Node *tail,int val,int *size){
    struct Node * node=(struct Node *)malloc(sizeof(struct Node));
    node->data=val;
    node->next=NULL;
    node->prev=NULL;
    
    if(!tail){
        *head=node;
        *size=(*size)+1;
        return node;
    }
    
    tail->next=node;
    node->prev=tail;
    *size=(*size)+1;
    
    return node;
}

void insertAtIndex(struct Node ** head,struct Node **tail,int index,int val,int *size){
    if(index>*size || index<0){
        printf("Invalid Index\n");
        return;
    }
    
    if(index==0){
        *head=insertAtHead(*head,tail,val,size);
        return;
    }else if(index==*size){
        *tail=insertAtEnd(head,*tail,val,size);
        return;
    }else{
        int i=0;
        struct Node * curr=*head;
        struct Node * node=(struct Node *)malloc(sizeof(struct Node));
        node->data=val;
        node->next=NULL;
        node->prev=NULL;
        while(i!=index-1){
            curr=curr->next;
            i++;
        }
        
        node->next=curr->next;
        (curr->next)->prev=node;
        node->prev=curr;
        curr->next=node;
        *size=(*size)+1;
        return;
    }
    
}


int main(){
    struct Node * head=(struct Node *)malloc(sizeof(struct Node));
    struct Node * b=(struct Node *)malloc(sizeof(struct Node));
    struct Node * tail=(struct Node *)malloc(sizeof(struct Node));
    head=NULL;
    tail=NULL;
    int size=0;
    // head->data=8;
    // b->data=10;
    // tail->data=11;
    // head->prev=NULL;
    // head->next=b;
    // b->prev=head;
    // b->next=tail;
    // tail->prev=b;
    // tail->next=NULL;
    
    // traversal(head);
    
    // head=insertAtHead(head,&tail,16);
    // head=insertAtHead(head,&tail,6);
    tail=insertAtEnd(&head,tail,8,&size);
    tail=insertAtEnd(&head,tail,18,&size);
    insertAtIndex(&head,&tail,0,12,&size);
    insertAtIndex(&head,&tail,size,1,&size);
    printf("%d\n",size);
    traversal(head);
    traversalReverse(tail);
    insertAtIndex(&head,&tail,3,11,&size);
    printf("%d\n",size);
    traversal(head);
    traversalReverse(tail);
}
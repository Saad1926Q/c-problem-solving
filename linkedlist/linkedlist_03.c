#include <stdio.h>
#include <stdlib.h>

//Write a C program to delete nodes from Linked List

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

void deleteFirstNode(struct Node **head_ref){
    if((*head_ref)!=NULL){
        struct Node* ptr=*head_ref;
        *head_ref=(*head_ref)->next;
        free(ptr);
    }else{
        printf("No element to delete\n");
    }

}

void deletingNodeBetween(struct Node* head,int target){
    struct Node *prev=head;
    if(prev!=NULL){
        while(prev->next->data!=target){
            prev=prev->next;
        }
        
        struct Node *temp=prev->next;
        prev->next=prev->next->next;
        free(temp);
    }else{
        printf("Nothing to delete\n");
    }
}

void deleteLast(struct Node* head){
    struct Node *prev=head;
    if(head!=NULL){
        while(prev->next->next!=NULL){
            prev=prev->next;
        }
        struct Node *temp=prev->next;
        prev->next=NULL;
        free(temp);
    }else{
        printf("Nothing to delete\n");
    }
}

void deleteAtGivenPosition(struct Node** head_ref,int position){
    struct Node *prev=*head_ref;
    if(*head_ref==NULL){
        printf("Nothing to delete\n");
        return;
    }
    
    if(position==0){
        *head_ref=prev->next;
        free(prev);
        return;
    }
    
    for(int i=0;i<position && prev!=NULL;i++){  //We are trying to get to the node before the one which we want to delete
        prev=prev->next;
    }
    
    // If the position is beyond the end of the list
    if (prev == NULL || prev->next == NULL) {
        return;
    }
    
    struct Node*next=prev->next->next;
    free(prev->next);
    prev->next=next;
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
    deleteAtGivenPosition(&head,1);
    traversal(head);
}
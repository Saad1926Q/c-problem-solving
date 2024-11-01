#include <stdio.h>
#include <stdlib.h>

//Write a C program to implement Binary Search Tree

struct Node{
    int val;
    struct Node* left;
    struct Node* right;
};

struct Node * insert(struct Node * root,int val){
    struct Node* node=(struct Node *)malloc(sizeof(struct Node));
    node->left=NULL;
    node->right=NULL;
    if(!root){
        root=node;
        root->val=val;
    }else{
        if(val>root->val){
            root->right=insert(root->right,val);
        }else if(val<root->val){
            root->left=insert(root->left,val);
        }
    }
    return root;
}

void preorder(struct Node * root){
    if(root==NULL){
        return;
    }
    
    printf("%d ",root->val);
    preorder(root->left);
    preorder(root->right);
}

void postorder(struct Node * root){
    if(root==NULL){
        return;
    }
    
    preorder(root->left);
    preorder(root->right);
    printf("%d ",root->val);
}

void inorder(struct Node * root){
    if(root==NULL){
        return;
    }
    
    preorder(root->left);
    printf("%d ",root->val);
    preorder(root->right);
}

struct Node * delete(struct Node* root,int key){
    if(root==NULL){
        return root;
    }
    
    if(key>root->val){
        root->right=delete(root->right,key);
    }else if(key<root->val){
        root->left=delete(root->left,key);
    }else{
        if(!root->left && !root->right){
            root=NULL;
        }else if(!root->left && root->right){
            root=root->right;
        }else if(root->left && !root->right){
            root=root->left;
        }else{
            struct Node *curr=root->right;
            while(curr->left){
                curr=curr->left;
            }
            
            root->val=curr->val;
            root->right=delete(root->right,curr->val);
        }
    }
    return root;
}

int main(){
    struct Node * root;
    root=NULL;
    root=insert(root,6);
    root=insert(root,8);
    root=insert(root,5);
    root=insert(root,15);
    root=insert(root,4);
    root=insert(root,3);
    root=insert(root,12);
    
    preorder(root);
    printf("\n");
    root=delete(root,6);
    preorder(root);
    printf("\n");
}

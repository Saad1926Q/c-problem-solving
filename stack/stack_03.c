#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//parenthesis matching using stack in C

struct stack{
        int size;
        int top;
        char* arr;
    };

void push(struct stack* stack,char value){
    if(stack->top==stack->size-1){
        printf("Stack is full\n");
    }else{
        stack->top++;
        stack->arr[stack->top]=value;
        printf("Pushed %c at %d\n",value,stack->top);
    }
}


void pop(struct stack* stack){
    if(stack->top==-1){
        printf("Empty stack\n");
    }else{
        printf("Popped %c from %d\n",stack->arr[stack->top],stack->top);
        stack->arr[stack->top]=-1;
        stack->top--;
    }
}

int main(){
    struct stack s;
    int size;
    char* exp;
    
    printf("Enter size of the expression:");
    scanf("%d",&size);
    exp=(char*)malloc((size+1)*sizeof(char));
    printf("Enter the expression:");
    scanf("%s",exp);
    
    s.size=size+1;
    s.top=-1;
    s.arr=(char*)malloc(s.size*sizeof(char));
    int isBalanced=1;
    
    int i;
    
    for(i=0;i<strlen(exp);i++){
        if(exp[i]=='('){
            push(&s,'(');
        }
        else if(exp[i]==')'){
            if(s.top==-1){
                isBalanced=0;
            }else{
                pop(&s);
            }
        }
    }
    
    if(s.top==-1 && isBalanced!=0){
        printf("Balanced expression");
    }else{
        printf("Unbalanced expression");
    }
    
    return -1;
}
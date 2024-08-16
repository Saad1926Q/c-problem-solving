#include <stdio.h>
#include <stdlib.h>

//stack operatons in C

struct stack{
        int size;
        int top;
        int* arr;
    };

void push(struct stack* stack,int value){
    if(stack->top==stack->size-1){
        printf("Stack is full\n");
    }else{
        stack->top++;
        stack->arr[stack->top]=value;
        printf("Pushed %d at %d\n",value,stack->top);
    }
}


void pop(struct stack* stack){
    if(stack->top==-1){
        printf("Empty stack\n");
    }else{
        printf("Popped %d from %d\n",stack->arr[stack->top],stack->top);
        stack->arr[stack->top]=-1;
        stack->top--;
    }
}

void peek(struct stack* stack){
    if(stack->top==-1){
        printf("Empty stack\n");
    }else{
        printf("Top is %d\n",stack->top);
    }
}

int main(){
    struct stack s;
    s.size=80;
    s.top=-1;
    s.arr=(int*)malloc(s.size*sizeof(int));
    
    int quit=0;
    int option;
    int val;
    
    while(quit==0){
        printf("1. Push \n");
        printf("2. Pop \n");
        printf("3. Peek \n");
        printf("4. Quit \n");
        printf("\n");
        printf("Enter your choice:");
        scanf("%d",&option);
        printf("\n");
        
        switch(option){
            case 1:
                printf("Enter valuer to push:");
                scanf("%d",&val);
                push(&s,val);
                break;
            case 2:
                pop(&s);
                break;
            case 3:
                peek(&s);
                break;
            case 4:
                quit=1;
                break;
        }
        
    }
}
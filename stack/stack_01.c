#include <stdio.h>
#include <stdlib.h>

//Implement stack in C

int main(){
    struct stack{
        int size;
        int top;
        int* arr;
    }

    struct stack s;
    s.size=80;
    s.top=-1;
    s.arr=(int*)malloc(s.size*sizeof(int));
}

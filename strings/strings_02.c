#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//C program to Reverse a String Using Recursion
void reverse(char *str,int length,int i){
    int mid;
    int temp;
    
    if(length%2==0){
        mid=length/2;
    }
    else{
        mid=(length+1)/2;
    }
    
    if(i<mid){
        temp=str[i];
        str[i]=str[length-i-1];
        str[length-i-1]=temp;
        reverse(str,length,i+1);
    }
}

int main()
{
    int size;
    char *mystr;
    
    printf("Enter the length of string:");
    scanf("%d",&size);
    
    mystr=(char*)malloc((size+1)*sizeof(char));
    printf("Enter the string:");
    scanf("%s",mystr);
    
    reverse(mystr,size,0);
    
    printf("Reversed String:%s",mystr);
    

    return 0;
}
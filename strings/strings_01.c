#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Program to concatenate two strings without using strcat

int main()
{
    int size1,size2;
    char *arr1;
    char *arr2;
    char *arr3;
    printf("Enter the size of the first string:");
    scanf("%d",&size1);
    
    printf("Enter the size of the second string:");
    scanf("%d",&size2);
    
    arr1=(char*)malloc((size1+1)*sizeof(char));
    arr2=(char*)malloc((size2+1)*sizeof(char));
    arr3=(char*)malloc((size1+size2+1)*sizeof(char));
    
    printf("Enter the first string:");
    scanf("%s",arr1);
    
    printf("Enter the second string:");
    scanf("%s",arr2);
    
    int i,j;
    for(i=0;i<strlen(arr1);i++){
        arr3[i]=arr1[i];
    }
    
    for(j=0;j<strlen(arr2);j++){
        arr3[j+i]=arr2[j];
    }
    
    arr3[j+i]='\0';
    
    printf("%s",arr3);
    
    
}
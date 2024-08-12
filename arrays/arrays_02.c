#include <stdio.h>
#include <stdlib.h>
//C Program to reverse an array

void reverse(int *arr,int length){
    int i,mid,temp;
    
    if(length%2==0){
        mid=length/2;
    }
    else{
        mid=(length+1)/2;
    }
    
    for(i=0;i<mid;i++){
        temp=arr[i];
        arr[i]=arr[length-i-1];
        arr[length-i-1]=temp;
    }
}

int main()
{
    int *arr;
    int size,i;
    printf("Enter the size of the array");
    scanf("%d",&size);
    
    arr=(int*)malloc(size*sizeof(int));
    
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    
    printf("\n");
    
    reverse(arr,size);
    
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    
    printf("\n");
}
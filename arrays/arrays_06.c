#include <stdio.h>
#include <stdlib.h>

// Problem: Given an array containing n distinct numbers taken from 0, 1, 2, ..., n, find the missing number.
// Input: int arr[] = {3, 0, 1};
// Output: Missing number is 2

int arrayContains(int *arr,int element,int size){
    for(int i=0;i<size;i++){
        if(arr[i]==element)
            return 1;
    }
    return 0;
}


int main(){
    int n,missing,i;
    printf("Enter n:");
    scanf("%d",&n);
    
    int *arr=(int *)malloc(n*sizeof(int));
    
    printf("Enter elements of array\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<=n;i++){
        if(arrayContains(arr,i,n)==0){
            missing=i;
            break;
        }    
    }
    
    printf("missing element is %d",missing);
    
}
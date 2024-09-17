#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Problem: Given an array of integers, find all duplicate elements.
// Assumptions: The array contains integers in the range [1, n], where n is the size of the array.
// Input: int arr[] = {4, 3, 2, 7, 8, 2, 3, 1};
// Output: Duplicates are 2, 3

void findDuplicates(int *arr,int size){
    bool *visited=(bool *)malloc((size)*sizeof(bool));
    for(int i=0;i<size;i++){
        int current=arr[i];
        for(int j=0;j<size;j++){
            if(i==j){
                continue;
            }
            if(arr[j]==current){
                if(visited[current-1]==false){
                    printf("%d ",current);
                    visited[current-1]=true;
                    break;
                }
            }
        }
    }    
}

int main(){
    int arr[]={1,2,3,19,2,1,5,100,100,5};
    
    int length=sizeof(arr)/sizeof(int);
    
    findDuplicates(arr,length);
}



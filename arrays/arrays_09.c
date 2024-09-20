#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Subarray sum equals to k.

// Input: nums = [1, 1, 1], k = 2
// Output: 2 (Two subarrays sum to 2: [1, 1] and [1, 1])

void sort(int * arr,int length){
    for(int i=0;i<length-1;i++){
        for(int j=0;j<length-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int display(int * arr,int start,int end){
    printf("[");
    for(int i=start;i<end;i++){
        printf("%d ",arr[i]);
    }
    printf("]");
    printf("\n");
}

void subarraySum(int *arr,int length,int target){
    int count=0;
    for(int i=0;i<length;i++){
        int currentSum=0;
        int start=i;
        int end =i;
        for(int j=i;j<length;j++){
            currentSum+=arr[j];
            end++;
            if(currentSum==target){
                count++;
                display(arr,start,end);
            }
        }
    }
}



int main(){
    int arr[]={1,1,1,0,3,-1,1};
    
    int length=sizeof(arr)/sizeof(int);
    
    subarraySum(arr,length,3);
}
#include <stdio.h>
#include <stdlib.h>

//Given an array of integers, find the contiguous subarray with the maximum sum.
//Input: int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
//Output: Maximum subarray sum is 6

int maxSubarray(int *arr,int size){
    int maxsum=arr[0];
    int currentsum;
    
    for(int i=0;i<size;i++){
        currentsum=0;
        for(int j=i;j<size;j++){
            currentsum+=arr[j];
            if(currentsum>maxsum){
                maxsum=currentsum;
            }
        }
    }
    
    return maxsum;
}

int main(){
    int size;
    
    printf("Enter size of array:");
    scanf("%d",&size);
    
    int *arr=(int *)malloc(size*sizeof(int));
    
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    
    int max=maxSubarray(arr,size);
    
    printf("Maximum subarray sum is %d",max);
    
    return 0;
}
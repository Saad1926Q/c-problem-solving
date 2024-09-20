#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Find the longest consecutive sequence in an unsorted array.
// Input: [100, 4, 200, 1, 3, 2]
// Output: 4 (The longest consecutive sequence is [1, 2, 3, 4])

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


int longestSeq(int * arr,int length){
    int longest=1;
    for(int i=0;i<length;i++){
        int currentLength=1;
        int prev=arr[i];
        for(int j=0;j<length;j++){
            if(i==j){
                continue;
            }
            if(arr[j]-prev==1){
                prev=arr[j];
                currentLength+=1;
            }
        }
        if(currentLength>longest){
            longest=currentLength;
        }
    }
    
    return longest;
}

int main(){
    int arr[]={1,2,3,19,7,5,4,6,100,3};
    
    int length=sizeof(arr)/sizeof(int);
    
    sort(arr,length);
    
    printf("%d",longestSeq(arr,length));
}
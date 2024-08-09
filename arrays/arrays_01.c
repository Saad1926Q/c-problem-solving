#Given an array of size N. The task is to find the maximum and the minimum element of the array using the minimum number of comparisons.

#include <stdio.h>

int SIZE=10;

int main()
{
    int arr[SIZE];
    
    for(int i=0;i<SIZE;i++){
        scanf("%d",&arr[i]);
    }
    
    int min=arr[0];
    int max=arr[0];
    
    for(int i=0;i<SIZE;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        
        if(arr[i]<min){
            min=arr[i];
        }
    }
    
    printf("Maximum is %d\n",max);
    printf("Minimum is %d\n",min);
    
}
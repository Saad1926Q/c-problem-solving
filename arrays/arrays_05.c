#include <stdio.h>
#include <stdlib.h>

//Problem: Rotate an array of n elements to the left by k steps.
//Input: int arr[] = {1, 2, 3, 4, 5, 6, 7}; int k = 2;
//Output: Rotated array is {3, 4, 5, 6, 7, 1, 2}

int main(){
    int size,k,temp,i;
    
    printf("Enter size of array:");
    scanf("%d",&size);
    
    int *arr=(int *)malloc(size*sizeof(int));
    
    printf("Enter elements of array\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter value of k:");
    
    scanf("%d",&k);
    
    printf("Before\n");
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    
    printf("\n");
    //Shifting by 1 position to the left "k" times
    for(int j=0;j<k;j++){
        //Shifting by 1 position to the left
        for(i=0;i<size-1;i++){
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }

    
    printf("After\n");
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    
}
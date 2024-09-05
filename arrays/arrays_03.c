#include <stdio.h>
#include <stdlib.h>
//Write program in C to take an array of numbers and split into two separate arrays for odd and even numbers.

int main()
{
    int size;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    
    int *arr=(int *)malloc(size*sizeof(int));
    
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    
    int oddsize=0,evensize=0;
    
    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            evensize++;
        }else{
            oddsize++;
        }
    }
    
    int *oddarr=(int *)malloc(oddsize*sizeof(int));
    int *evenarr=(int *)malloc(evensize*sizeof(int));
    
    int currentodd=0,currenteven=0;
    
    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            evenarr[currenteven]=arr[i];
            currenteven++;
        }else{
            oddarr[currentodd]=arr[i];
            currentodd++;
        }
    }
    
    printf("Odd\n");
    
    for(int i=0;i<oddsize;i++){
        printf("%d",oddarr[i]);
    }
    
    printf("\n");
    printf("Even\n");
    for(int i=0;i<evensize;i++){
        printf("%d",evenarr[i]);
    }
    printf("\n");
    return 0;
}
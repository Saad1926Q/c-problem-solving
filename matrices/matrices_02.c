#include <stdio.h>
#include <stdlib.h>

// Rotate Matrix by 90 Degrees
// Problem: Write a program to rotate a matrix by 90 degrees clockwise.
// Input: A matrix of size n x n.
// Output: The matrix rotated by 90 degrees clockwise.

int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    
    int **matrix=(int **)malloc(n*sizeof(int));
    
    for(int i=0;i<n;i++){
        matrix[i]=(int *)malloc(n*sizeof(int));
    }
    
    int **rotated=(int **)malloc(n*sizeof(int));
    
    for(int i=0;i<n;i++){
        rotated[i]=(int *)malloc(n*sizeof(int));
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    
    printf("Original Array\n");
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            rotated[j][i]=matrix[i][j];
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int mid=n/2;
            for(int k=0;k<mid;k++){
                int temp=rotated[i][k];
                rotated[i][k]=rotated[i][n-1-k];
                rotated[i][n-1-k]=temp;
            }
        }
    }
    
    printf("Rotated\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",rotated[i][j]);
        }
        printf("\n");
    }
}
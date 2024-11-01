#include <stdio.h>
#include <stdlib.h>

// Problem: Write a program to find the transpose of a matrix. The transpose of a matrix is obtained by swapping its rows and columns.
// Input: A matrix of size m x n.
// Output: Transposed matrix of size n x m.

int main(){
    int rows,columns;
    printf("Enter rows:");
    scanf("%d",&rows);
    printf("Enter columns:");
    scanf("%d",&columns);
    
    int **matrix=(int **)malloc(rows*sizeof(int));
    
    for(int i=0;i<rows;i++){
        matrix[i]=(int *)malloc(columns*sizeof(int));
    }
    
    int **transpose=(int **)malloc(columns*sizeof(int));
    
    for(int i=0;i<columns;i++){
        transpose[i]=(int *)malloc(rows*sizeof(int));
    }
    
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    
    printf("Original Array\n");
    
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            transpose[j][i]=matrix[i][j];
        }
    }
    
    printf("Transpose\n");
    for(int i=0;i<columns;i++){
        for(int j=0;j<rows;j++){
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
}
#include <stdio.h>
#include <stdlib.h>


void decimalToBinary(int num){
    int result[32];
    int i=0;
    
    while(num>0){
        int rem=num%2;
        result[i]=rem;
        num=num/2;
        i++;
    }
    
    for(int j=i-1;j>=0;j--){
        printf("%d",result[j]);
    }
    printf("\n");
}

int main()
{
    int num=421;
    decimalToBinary(num);

    return 0;
}
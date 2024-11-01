#include <stdio.h>
#include <stdlib.h>


void decimalToHexadecimal(int num){
    char result[32];
    int i=0;
    
    while(num>0){
        int rem=num%16;
        if(rem>9){
            switch(rem){
                case 10:
                    result[i]='A';
                    break;
                case 11:
                    result[i]='B';
                    break;
                case 12:
                    result[i]='C';
                    break;
                case 13:
                    result[i]='D';
                    break;
                case 14:
                    result[i]='E';
                    break;
                case 15:
                    result[i]='F';
                    break;
            }
        }else{
            result[i]=rem+'0';    
        }
        
        num=num/16;
        i++;
    }
    
    for(int j=i-1;j>=0;j--){
        printf("%c",result[j]);
    }
    printf("\n");
}

int main()
{
    int num=421;
    decimalToHexadecimal(num);
    
    return 0;
}
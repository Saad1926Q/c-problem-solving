#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Find all palindromic substrings in a string.

// Input: "aaa"
// Output: ["a", "a", "a", "aa", "aa", "aaa"]

void display(char *str,int start,int end){
    for(int i=start;i<=end;i++){
        printf("%c",str[i]);
    }
    printf(",");
}

int checkPalindrome(char * str,int start,int end){
    
    while(start<end){
        if(str[start]!=str[end]){
            return 0;
        }
        
        start++;
        end--;
    }
    
    return 1;
}


void palindromicSubstrings(char * str){
    int len=strlen(str);
    for(int i=0;i<len;i++){
        for(int j=i;j<len;j++){
            if(checkPalindrome(str,i,j)==1){
                display(str,i,j);    
            }
        }
    }
}


int main(){
    char * str1="xyxlolehe";
    
    palindromicSubstrings(str1);
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Generate all possible substrings of a string.

// Input: "abc"
// Output: ["a", "b", "c", "ab", "bc", "abc"]

void display(char *str,int start,int end){
    for(int i=start;i<=end;i++){
        printf("%c",str[i]);
    }
    printf(",");
}

void Substrings(char * str){
    int len=strlen(str);
    for(int i=0;i<len;i++){
        for(int j=i;j<len;j++){
            display(str,i,j);
        }
    }
}

int main(){
    char * str="silent";
    Substrings(str);
}
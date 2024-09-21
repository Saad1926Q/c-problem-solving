#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Check if two strings are anagrams.

// Input: "listen", "silent"
// Output: true (Both strings are anagrams)


int charOccurences(char * str,char ch){  //Checks how many times a character occurs in a string | Returns 0 if it doesnt 
    int len=strlen(str);
    int count=0;
    for(int i=0;i<len;i++){
        if(str[i]==ch){
            count++;
        }
    }
    return count;
}

int checkAnagram(char* str1,char* str2){
    if(strlen(str1)!=strlen(str2)){
        return 0;
    }
    
    for(int i=0;i<strlen(str1);i++){
        if(charOccurences(str1,str1[i])!=charOccurences(str2,str1[i])){
            return 0;
        }
    }
    return 1;
}

int main(){
    char * str1="silent";
    char * str2="listen";
    printf("%d",checkAnagram(str1,str2));
}
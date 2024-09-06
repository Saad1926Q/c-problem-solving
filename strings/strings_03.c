#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Problem: Given a string, find the length of the longest substring without repeating characters.
// Input: char str[] = "abcabcbb";
// Output: Length of the longest substring is 3


int containsUnique(char *str,int start,int end){  //Here start means starting index for the substring, end means ending index for substring
    
    int Characters[256]={0}; //Initializing all values in the character set to 0
    int length;
    for(int i=start;i<=end;i++){
        //Checking if the character at the current character has already appeared in the substring before
        if(Characters[(int)str[i]]==1){
            return 0;
        }
        Characters[(int)str[i]]=1;      // (int)str[i] gives the ASCII value of a character,We keep on assigning 1 to the characters which apper in the substring to keep track of them
        
    }
    return 1;
}

int LongestSubstringNonRepeating(char *str){
    int length=strlen(str);
    int longest=0;
    
    for(int i=0;i<length;i++){
        for(int j=i;j<length;j++){
            if(containsUnique(str,i,j)==1){
                int substrLength=j-i+1;
                if(substrLength>longest){
                    longest=substrLength;
                }
            }
        }
    }
    
    return longest;
}

int main(){
    int length;
    printf("Enter the length of string:");
    scanf("%d",&length);
    
    char *string=(char *)malloc((length+1)*sizeof(char));
    
    scanf("%s",string);
    
    printf("Length of the longest substring is %d",LongestSubstringNonRepeating(string));
    
}
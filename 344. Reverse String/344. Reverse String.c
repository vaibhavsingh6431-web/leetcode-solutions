/*
 * Problem: 344. Reverse String
 * Difficulty: Easy
 * Link: https://leetcode.com/problems/reverse-string/submissions/1915918097/
 * Language: c
 * Date: 2026-02-11
 */

void reverseString(char* s, int sSize) {
    int start=0;
    int end = sSize-1;
    
    while(start<end){
     char   temp=s[start];
        s[start]=s[end];
        s[end]=temp;
        start++;
        end--;
    }
}

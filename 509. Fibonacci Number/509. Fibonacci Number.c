/*
 * Problem: 509. Fibonacci Number
 * Difficulty: Easy
 * Link: https://leetcode.com/problems/fibonacci-number/submissions/1912214253/
 * Language: c
 * Date: 2026-02-08
 */



int fib(int n){
if(n==0){
    return 0;
} if(n==1){
    return 1;
} else {
    return fib(n-1)+fib(n-2);
}
}

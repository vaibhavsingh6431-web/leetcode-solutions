/*
 * Problem: 231. Power of Two
 * Difficulty: Easy
 * Link: https://leetcode.com/problems/power-of-two/submissions/1912129139/
 * Language: c
 * Date: 2026-02-08
 */

bool isPowerOfTwo(int n) {
    if(n<=0){
        return false;
    }
    return (n&(n-1))==0;
}

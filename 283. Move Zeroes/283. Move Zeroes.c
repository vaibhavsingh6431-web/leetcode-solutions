/*
 * Problem: 283. Move Zeroes
 * Difficulty: Easy
 * Link: https://leetcode.com/problems/move-zeroes/submissions/1911483657/
 * Language: c
 * Date: 2026-02-07
 */

void moveZeroes(int* nums, int numsSize) {
    int slow=0;
    for(int fast=0;fast<numsSize;fast++){
        if(nums[fast]!=0){
            int temp=nums[slow];
            nums[slow]=nums[fast];
            nums[fast]=temp;
            slow++;
        }
    }
}

/*
 * Problem: 350. Intersection of Two Arrays II
 * Difficulty: Easy
 * Link: https://leetcode.com/problems/intersection-of-two-arrays-ii/submissions/1915926618/
 * Language: c
 * Date: 2026-02-11
 */

#include <stdlib.h>

int* intersect(int* nums1, int nums1Size, 
               int* nums2, int nums2Size, 
               int* returnSize) {

    int* result = (int*)malloc(sizeof(int) * (nums1Size < nums2Size ? nums1Size : nums2Size));
    
    int k = 0;

    for(int i = 0; i < nums1Size; i++) {
        for(int j = 0; j < nums2Size; j++) {
            if(nums1[i] == nums2[j]) {
                result[k++] = nums1[i];
                nums2[j] = -1;   // mark use
                break;
            }
        }
    }

    *returnSize = k;   // store size in pointer

    return result;
}


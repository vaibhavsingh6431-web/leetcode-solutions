/*
 * Problem: 918. Maximum Sum Circular Subarray
 * Difficulty: Medium
 * Link: https://leetcode.com/problems/maximum-sum-circular-subarray/submissions/1935276511/
 * Language: c
 * Date: 2026-03-02
 */

int maxSubarraySumCircular(int* nums, int numsSize) {
    int totalSum = 0;
    int maxSub = nums[0], currentMax = nums[0];
    int minSub = nums[0], currentMin = nums[0];

    for (int i = 0; i < numsSize; i++) {
        totalSum += nums[i];
        if (i > 0) {
            currentMax = (nums[i] > currentMax + nums[i]) ? nums[i] : currentMax + nums[i];
            maxSub = (maxSub > currentMax) ? maxSub : currentMax;

            currentMin = (nums[i] < currentMin + nums[i]) ? nums[i] : currentMin + nums[i];
            minSub = (minSub < currentMin) ? minSub : currentMin;
        }
    }

    if (totalSum == minSub) return maxSub;

    int circularMax = totalSum - minSub;
    return (maxSub > circularMax) ? maxSub : circularMax;
}

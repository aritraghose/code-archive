// https://leetcode.com/problems/maximum-subarray/description/

#include <bits/stdc++.h>

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max = INT_MIN, sum = 0;

        for (int i=0; i<nums.size(); i++) {
            sum += nums[i];
            if (sum > max) max = sum;
            if (sum < 0) sum = 0;
        }

        return max;
    }
};
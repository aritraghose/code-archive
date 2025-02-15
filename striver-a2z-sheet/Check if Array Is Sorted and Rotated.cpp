// https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/description/


class Solution {
public:
    bool check(vector<int>& nums) {
        if (nums.size() <= 1) return true;

        int inversion = 0;

        for (int i=0; i<nums.size()-1; i++) {
            if (nums[i] > nums[i+1]) inversion++;
        }

        if (nums[nums.size()-1] > nums[0]) inversion++;

        if (inversion <= 1) return true;
        else return false;
    }
};
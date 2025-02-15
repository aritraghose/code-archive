// https://leetcode.com/problems/missing-number/description/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0, size = nums.size();
        for (int i=0; i<nums.size(); i++) sum += nums[i];

        int expected = ((size)* (size+1))/2;
        return expected-sum;
    }
};
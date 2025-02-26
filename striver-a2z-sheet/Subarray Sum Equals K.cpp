// https://leetcode.com/problems/subarray-sum-equals-k/description/

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum = 0, count = 0;
        map<int, int> preSum;
        preSum[0] = 1;

        for (int i=0; i<nums.size(); i++) {
            sum += nums[i];
            long long int rem = sum-k;
            
            count += preSum[rem];
            preSum[sum]++;

        }

        return count;
    }
};
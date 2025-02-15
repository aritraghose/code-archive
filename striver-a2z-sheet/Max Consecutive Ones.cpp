// https://leetcode.com/problems/max-consecutive-ones/


class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int highest = 0;
        for (int i=0; i<nums.size(); i++) {
            int count = 0;
            while(i < nums.size() && nums[i] == 1) {
                count++;
                i++;
            }
            
            if (count > highest) highest = count;
        }

        return highest;
    }
};
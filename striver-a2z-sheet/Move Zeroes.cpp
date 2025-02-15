// https://leetcode.com/problems/move-zeroes/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int pos = 0;
        for (int i=0; i<nums.size(); i++) {
            while(i<nums.size() && nums[i] == 0) {
                i++;
            }
            if (i < nums.size()) {
                nums[pos] = nums[i];
                if (i != pos) nums[i] = 0;
                pos++;
            }
        }
    }
};
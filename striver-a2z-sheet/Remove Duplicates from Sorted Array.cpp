// https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int p = 0;
        int lastChar = nums[p];
        for (int i=0; i<nums.size(); i++) {
            while(i < nums.size() && nums[i] == lastChar) i++;
            if (i < nums.size()){
                p++;
                nums[p] = nums[i];
                lastChar = nums[p];
            }
        }
        return p+1;
    }
};
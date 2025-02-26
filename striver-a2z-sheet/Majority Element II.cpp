// https://leetcode.com/problems/majority-element-ii/description/

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count1 = 0, count2 = 0, element1 = 0, element2 = 0, size = nums.size();
        vector<int> ans;

        for (int i=0; i<nums.size(); i++) {
            if (count1 == 0 && nums[i] != element2) {
                count1++;
                element1 = nums[i];
            } else if (count2 == 0 && nums[i] != element1) {
                count2++;
                element2 = nums[i];
            } else if (nums[i] == element1) {
                count1++;
            } else if (nums[i] == element2) {
                count2++;
            } else {
                count1--;
                count2--;
            }
        }

        count1 = 0, count2 = 0;
        
        for (int i=0; i<nums.size(); i++) {
            if (nums[i] == element1) count1++;
            else if (nums[i] == element2) count2++;
        }

        if (count1 > size/3) ans.push_back(element1);
        if (count2 > size/3) ans.push_back(element2);

        return ans;
    }
};
// https://leetcode.com/problems/3sum/description/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        
        for (int i=0; i<nums.size(); i++) {
            int j= i+1, k = nums.size()-1;
            if (i != 0 && nums[i] == nums[i-1]) continue;
            while(j<k) {
                if (nums[i]+nums[j]+nums[k] == 0) {
                    vector<int> temp = {nums[i], nums[j], nums[k]};
                    ans.push_back(temp);
                    while(j<k && nums[j] == nums[j+1]) j++;
                    j++;
                    while(k>j && nums[k] == nums[k-1]) k--;
                    k--;
                } else if (nums[i]+nums[j]+nums[k] < 0) {
                    // while(j<k && nums[j] == nums[j+1]) j++;
                    j++;
                } else {
                    // while(k>j && nums[k] == nums[k-1]) k--;
                    k--;
                }
            }    
        }

        return ans;
    }
};
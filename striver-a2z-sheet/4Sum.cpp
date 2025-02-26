// https://leetcode.com/problems/4sum/

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        int size = nums.size();

        for (int i=0; i<size; i++) {
            if (i > 0 && nums[i] == nums[i-1]) continue;
            for (int j = i+1; j<size; j++) {
                if(j > i+1 && nums[j] == nums[j-1]) continue;
                int k = j+1, l = size-1;
                while(k<l) {
                    long long sum = nums[i] + nums[j];
                    sum += nums[k];
                    sum += nums[l];
                    if (sum == target) {
                        vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                        ans.push_back(temp);
                        k++;
                        while(k<l && nums[k] == nums[k-1]) k++;
                        l--;
                        while(k<l && nums[l] == nums[l+1]) l--;
                    } else if (sum< target) {
                        k++;
                    } else {
                        l--;
                    }
                }
            }
        }
        return ans;
    }
};
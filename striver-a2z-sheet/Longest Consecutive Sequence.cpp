// https://leetcode.com/problems/longest-consecutive-sequence/description/

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        int longest = 1;
        unordered_set<int> st;

        for (int i=0; i<nums.size(); i++) {
            st.insert(nums[i]);
        }
        
        for (auto it=st.begin(); it != st.end(); it++) {
            int current = *it;

            if (st.find(current-1) == st.end()) {
                int count = 1;
                current++;
                while(st.find(current) != st.end()) {
                    count++;
                    current++;
                }
                longest = max(longest, count);
            }
        }

        return longest;
        
    }
};
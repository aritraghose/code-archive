// https://leetcode.com/problems/rotate-array/


class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int i = 0, j = nums.size()-1;
        k = k%(j+1);

        while (i<j) {
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            i++;
            j--;
        }

        i = 0, j = k-1;
        while (i<j) {
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            i++;
            j--;
        }

        i = k, j = nums.size()-1;
        while (i<j) {
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            i++;
            j--;
        }


    }
};
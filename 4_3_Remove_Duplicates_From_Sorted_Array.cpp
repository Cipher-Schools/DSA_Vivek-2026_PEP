// https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

// ptr = 3
// [0,1,2,3,14,2,2,3,3,14]

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 1, n = nums.size();
        for(int i=1; i<n; i++){
            if(nums[i]!=nums[i-1]){
                nums[j++] = nums[i];
            }
        }
        return j;
    }
};
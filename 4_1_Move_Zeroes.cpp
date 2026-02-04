//https://leetcode.com/problems/move-zeroes/description/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int ptr = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]!=0){
                swap(nums[ptr], nums[i]);
                ptr++;
            }
        }
    }
};
// [2]
// ptr 1 =  current_elem
// ptr 2 = latest pos without non zero element
// [2,3,4,0,0,7,1]
// ptr1 = 5
// ptr2 = 3

// this is the problem statement https://leetcode.com/problems/search-in-rotated-sorted-array/description/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i = 0, n = nums.size();
        while(i<n-1 && nums[i]<=nums[i+1])
            i++;
        int l = 0, r = i;
        while(l<=r){
            int mid = (l+r)/2;
            if(target==nums[mid])
                return mid;
            else if(nums[mid]<target)
                l = mid+1;
            else
                r = mid-1;
        }
        l = i+1, r = n-1;
        while(l<=r){
            int mid = (l+r)/2;
            if(target==nums[mid])
                return mid;
            else if(nums[mid]<target)
                l = mid+1;
            else
                r = mid-1;
        }
        return -1;
    }
};
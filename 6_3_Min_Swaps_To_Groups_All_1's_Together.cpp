// https://leetcode.com/problems/minimum-swaps-to-group-all-1s-together-ii/description/

class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int count_ones = 0, n = nums.size();
        // finding count
        for(int i=0; i<n; i++)
            if(nums[i]==1)
                count_ones++;
        if(count_ones==0 || count_ones==1)
            return 0;
        // building prefix sum
        for(int i=1; i<n; i++){
            nums[i]=nums[i]+nums[i-1];
        }
        int end = count_ones-1; 
        int best_ans = count_ones-nums[end];
        // running the window and updating best ans
        int start = 1; end = count_ones;
        if(end==n)
            end = 0;
        while(start<=n){
            int ans;
            if(start<=end)
                ans = count_ones-(nums[end]-nums[start-1]);
            else
                ans = count_ones-(nums[n-1]-nums[start-1]+nums[end]);
            best_ans = min(ans, best_ans);
            start++, end++;
            if(end==n)
                end=0;

        }
        return best_ans;        
    }};
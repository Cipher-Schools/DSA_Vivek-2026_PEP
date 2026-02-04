// https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1

class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        int n = arr.size();
        for(int i=1; i<n; i++){
            arr[i]=arr[i]+arr[i-1];
        }   
        int best_sum = arr[k-1];
        for(int i=k; i<n; i++){
            int sum = arr[i]-arr[i-k];
            best_sum = max(sum, best_sum);
            // if(sum>best_sum)
            //     best_sum = sum;
        }
        return best_sum;
    }
};
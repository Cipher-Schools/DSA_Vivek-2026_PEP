// https://leetcode.com/problems/next-greater-element-i/

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        vector<int> nge(nums2.size(), -1);
        stack<int> s;
        // taking all the elements from nums2 one by one
        for(int i=nums2.size()-1; i>=0; i--){
            while(!s.empty() && s.top()<=nums2[i]){
                s.pop();
            }
            if(s.empty()){
                nge[i] = -1;
            }
            else{
                nge[i] = s.top();
            }
            s.push(nums2[i]);
        }
        // taking all the elements from nums1 one by one
        for(int i=0; i<nums1.size(); i++){
            // finding match of ith element of nums1 in nums2
            for(int j=0; j<nums2.size(); j++){
                // as soon as match is found adding the nge for that element in ans vectonr
                if(nums1[i]==nums2[j]){
                    ans.push_back(nge[j]);
                    break;
                }
            }
        }
        return ans;
    }
};
// https://leetcode.com/problems/koko-eating-bananas/description/

class Solution {
public:
    bool isPos(vector<int>& piles, int hours, long long speed){
        for(int i=0; i<piles.size(); i++){
            int time_for_this_pile = piles[i]/speed;
            time_for_this_pile = time_for_this_pile + (piles[i]%speed!=0 ? 1 : 0); 
            hours-=time_for_this_pile;
        }
        if(hours<0)
            return false;
        return true;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        long long l = 1, r = 1e18;
        while(l<r){
            long long mid = l+(r-l)/2;
            if(isPos(piles, h, mid))
                r = mid;
            else
                l = mid+1;
        }
        return l;
    }
};
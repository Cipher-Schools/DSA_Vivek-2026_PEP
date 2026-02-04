//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bi =0, si = 0, tp = 0, p = 0;        
        while(si<prices.size()){
            tp = prices[si]-prices[bi];
            p = max(p, tp);
            if(prices[si]<prices[bi])
                bi = si;
            si++;
        }
        return p;
    }
};
// buy = 1
// sell = 15
// tprofit = 14
// profit = 14
//  [2 9 1 5 15]
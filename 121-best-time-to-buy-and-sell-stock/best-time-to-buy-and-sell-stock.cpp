class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int Min= prices[0];
        int Maxprofit=0;
        int n =prices.size();
        for(int i=0; i<n;i++){
            int cost=prices[i]-Min;
            Maxprofit= max(Maxprofit,cost);
            Min=min(Min,prices[i]);
        }
        return Maxprofit;
    }
};
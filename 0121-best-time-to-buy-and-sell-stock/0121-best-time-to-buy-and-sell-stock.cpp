class Solution {
public:
    int maxProfit(vector<int>& prices) {
    // int buy =INT_MAX;
    //     int maxprofit=0;
    //     for(int i=0;i<prices.size();i++)
    //     {
    //         if(prices[i]<buy)
    //         {
    //             buy = prices[i];
    //         }
    //         else if(prices[i]-buy>maxprofit)
    //         {
    //             maxprofit = prices[i]-buy;
    //         }

    //     }
    //     return maxprofit;
    int mini=INT_MAX;
    int ans=INT_MIN;
    for(int i=0;i<prices.size();i++){
        mini=min(mini,prices[i]);
        ans=max(ans,prices[i]-mini);
    }
    return ans;
    }
};
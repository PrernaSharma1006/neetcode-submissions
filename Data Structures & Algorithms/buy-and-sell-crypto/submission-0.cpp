class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprof = 0;
        int minprice = INT_MAX;

        for(int price : prices){

            minprice = min(price , minprice);
            int profit = price - minprice;
            maxprof = max(maxprof , profit);
        }
        return maxprof;        
    }
};

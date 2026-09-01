class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;
        int left = 0;
        int right = 1;
        while(left != prices.size() && right != prices.size()){
            int profit = prices[right] - prices[left];
            if(profit > max){
                max = profit;
            }
            if(prices[left] > prices[right]){
                left = right;
            }
            else{
                right++;
            }
        }
        return max;
    }
};

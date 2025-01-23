public class Solution {
    public int MaxProfit(int[] prices) {
        
        int min = int.MaxValue;
        int profit = 0;

        for(int i = 0; i < prices.Length; i++)
        {
            if(prices[i] <  min)
                min = prices[i];
            else if(prices[i] - min > profit)
                profit = prices[i] - min;
        }

        return profit;
    }
}
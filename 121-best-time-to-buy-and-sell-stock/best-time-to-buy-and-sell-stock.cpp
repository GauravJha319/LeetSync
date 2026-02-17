class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        int min=10001 , profit=0;
        for (int i:prices)
        {
            if (i-min>profit) profit=i-min;
            if (i<min) min=i;
        }
        return profit;
    }
};
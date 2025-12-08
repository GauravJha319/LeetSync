class Solution {
public:
    double calculateTax(vector<vector<int>>& brackets, int income)
    {
        double ans=0;
        for (int i=0 ; i<brackets.size() ; i++)
        {
            if (brackets[i][0]<=income)
            {
                if (i==0) ans=ans+(brackets[i][0]*(double)brackets[i][1])/100.0;
                else ans=ans+((brackets[i][0]-brackets[i-1][0])*(double)brackets[i][1])/100.0;
            }
            else
            {
                if (i!=0)
                {
                    double temp=income-brackets[i-1][0];
                    ans+=temp*(double)brackets[i][1]/100.0;
                }
                else
                {
                    ans+=income*(double)brackets[i][1]/100.0;
                }
                break;
            }
        }
        return ans;
    }
};
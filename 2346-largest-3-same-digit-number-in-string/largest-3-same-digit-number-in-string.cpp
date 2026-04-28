class Solution {
public:
    string largestGoodInteger(string num)
    {
        string ans="";
        for (int i=1 ; i<num.size()-1 ; i++)
        {
            if (num[i]==num[i-1] && num[i]==num[i+1])
            {
                if (ans.empty()) ans=string(3,num[i]);
                else if (ans[0]-'0'<num[i]-'0') ans=string(3,num[i]);
            }
        }
        return ans;
    }
};
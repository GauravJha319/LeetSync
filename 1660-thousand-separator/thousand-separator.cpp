class Solution {
public:
    string thousandSeparator(int n)
    {
        string ans="";
        if (n==0) return "0";
        int temp=n;
        int j=0;
        while (temp)
        {
            j++;
            if (j%3==1 && j!=1) ans.push_back('.');
            int digit=temp%10;
            temp=temp/10;
            ans.push_back(48+digit);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
class Solution {
public:
    int maxPower(string s)
    {
        int ans=0;
        for (int i=0 ; i<s.size() ; i++)
        {
            int temp=i,count=0;
            while (s[temp]==s[i])
            {
                count++;
                temp++;
            }
            i=temp-1;
            if (count>ans) ans=count;
        }
        return ans;
    }
};
class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3)
    {
        int lcplength=0;
        int temp=min({s1.length(),s2.length(),s3.length()});
        for (int i=0 ; i<temp ; i++)
        {
            if (s1[i]==s2[i] && s2[i]==s3[i]) lcplength++;
            else break;
        }
        if (lcplength==0) return -1;
        int ans=s1.length()-lcplength+s2.length()-lcplength+s3.length()-lcplength;
        return ans;
    }
};
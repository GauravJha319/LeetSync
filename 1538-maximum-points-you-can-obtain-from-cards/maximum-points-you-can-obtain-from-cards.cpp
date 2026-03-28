class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k)
    {
        int ans=0;
        for (int i=0 ; i<k ; i++)
        {
            ans+=cardPoints[i];
        }
        int n=cardPoints.size()-1;
        int temp=ans;
        for (int j=0 ; j<k ; j++)
        {
            temp=temp+cardPoints[n-j]-cardPoints[k-j-1];
            ans=max(temp,ans);
        }
        return ans;
    }
};
class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid)
    {
        vector<int> ans;
        unordered_map<int,int> freq;
        int n=grid.size();
        for (int i=0 ; i<n ; i++)
        {
            for (int j=0 ; j<n ; j++)
            {
                freq[grid[i][j]]++;
            }
        }
        int a,b;
        for (int i=1 ; i<=n*n ; i++)
        {
            if (freq[i]==0) b=i;
            if (freq[i]==2) a=i;
        }
        ans.push_back(a);
        ans.push_back(b);
        return ans;
    }
};
class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors)
    {
        int ans=0;
        int n=colors.size()-1;
        if (colors[0]!=colors[1] && colors[0]!=colors[n]) ans++;
        if (colors[n]!=colors[n-1] && colors[n]!=colors[0]) ans++;
        for (int i=1 ; i<=n-1 ; i++)
        {
            if (colors[i]!=colors[i-1] && colors[i]!=colors[i+1]) ans++;
        }
        return ans;
    }
};
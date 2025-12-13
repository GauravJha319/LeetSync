class Solution {
public:
    int width (int i)
    {
        if (i==0) return 1;
        int len;
        if (i<0) len=1;
        else len=0;
        len=len+log10(abs(i))+1;
        return len;
    }
    vector<int> findColumnWidth(vector<vector<int>>& grid)
    {
        vector<int> ans;
        for (int i=0 ; i<grid[0].size() ; i++)
        {
            int temp=width(grid[0][i]);
            for (int j=0 ; j<grid.size() ; j++)
            {
                if (width(grid[j][i])>temp) temp=width(grid[j][i]);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
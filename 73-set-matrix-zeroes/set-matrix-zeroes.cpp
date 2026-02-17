class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix)
    {
        unordered_map<int,int> row;
        unordered_map<int,int> column;
        for (int i=0 ; i<matrix.size() ; i++)
        {
            for (int j=0 ; j<matrix[0].size() ; j++)
            {
                if (matrix[i][j]==0)
                {
                    row[i]++;
                    column[j]++;
                }
            }
        }
        int m=matrix.size();
        int n=matrix[0].size();
        for (auto i:row)
        {
            for (int x=0 ; x<n ; x++)
            {
                matrix[i.first][x]=0;
            }
        }
        for (auto i:column)
        {
            for (int x=0 ; x<m ; x++)
            {
                matrix[x][i.first]=0;
            }
        }
    }
};
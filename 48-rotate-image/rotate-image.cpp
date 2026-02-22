class Solution {
public:
    void rotate(vector<vector<int>>& matrix)
    {
        int n=matrix.size();
        for (int i=0 ; i<n ; i++)
        {
            for (int j=i+1 ; j<n ; j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for (int i=0 ; i<n ; i++)
        {
            int st=0 , e=n-1;
            while (st<e)
            {
                swap(matrix[i][st],matrix[i][e]);
                st++;
                e--;
            }
        }
    }
};
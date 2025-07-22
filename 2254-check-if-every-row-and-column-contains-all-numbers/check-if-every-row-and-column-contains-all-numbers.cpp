class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix)
    {
        int n=matrix.size();
        for (int i=0 ; i<n ; i++)
        {
            unordered_map<int,int> freq1;
            for (int j=0 ; j<n ; j++)
            {
                freq1[matrix[i][j]]++;
            }
            for (int k=1 ; k<n ; k++)
            {
                if (freq1[k]!=1) return false;
            }
        }
        for (int i=0 ; i<n ; i++)
        {
            unordered_map<int,int> freq2;
            for (int j=0 ; j<n ; j++)
            {
                freq2[matrix[j][i]]++;
            }
            for (int k=1 ; k<n ; k++)
            {
                if (freq2[k]!=1) return false;
            }
        }
        return true;
    }
};
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
                int temp=matrix[i][j];
                freq1[matrix[i][j]]++;
                if (freq1[temp]>1) return false;
            }
        }
        for (int i=0 ; i<n ; i++)
        {
            unordered_map<int,int> freq2;
            for (int j=0 ; j<n ; j++)
            {
                int temp=matrix[j][i];
                freq2[matrix[j][i]]++;
                if (freq2[temp]>1) return false;
            }
        }
        return true;
    }
};
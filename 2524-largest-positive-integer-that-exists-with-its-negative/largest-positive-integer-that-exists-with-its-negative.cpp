class Solution {
public:
    int findMaxK(vector<int>& nums)
    {
        vector<int> pos;
        vector<int> neg;
        for (int i:nums)
        {
            if (i<0) neg.push_back(i);
            else pos.push_back(i);
        }
        int max=-1;
        for (int i=0 ; i<pos.size() ; i++)
        {
            for (int j=0 ; j<neg.size() ; j++)
            {
                if (pos[i]+neg[j]==0 && pos[i]>max) max=pos[i];
            }
        }
        return max;
    }
};
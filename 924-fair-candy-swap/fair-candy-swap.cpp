class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes)
    {
        vector<int> ans;
        int alice=0 , bob=0;
        for (int i:aliceSizes) alice+=i;
        for (int i:bobSizes) bob+=i;
        
        for (int i=0 ; i<aliceSizes.size() ; i++)
        {
            int temp=aliceSizes[i];
            for (int j=0 ; j<bobSizes.size() ; j++)
            {
                int temp2=bobSizes[j];
                if (alice-temp+temp2 == bob+temp-temp2)
                {
                    ans.push_back(temp);
                    ans.push_back(temp2);
                    break;
                }
            }
            if (!ans.empty()) break;
        }
        return ans;
    }
};
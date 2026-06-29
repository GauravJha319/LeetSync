class Solution {
public:
    int findKthPositive(vector<int>& arr, int k)
    {
        unordered_map<int,int> freq;
        for (int i:arr) freq[i]++;
        int i=1;
        while (k)
        {
            if (freq[i]==0) k--;
            i++;
        }
        return i-1;
    }
};
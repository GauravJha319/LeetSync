class Solution {
public:
    int maxFrequencyElements(vector<int>& nums)
    {
        int max=0;
        unordered_map<int,int> freq;
        for (int i:nums)
        {
            freq[i]++;
            if (freq[i]>max) max=freq[i];
        }
        int ans=0;
        unordered_map<int,int> visited;
        for (int i:nums)
        {
            if (freq[i]==max && visited[i]==0)
            {
                visited[i]++;
                ans++;
            }
        }
        return ans*max;;
    }
};
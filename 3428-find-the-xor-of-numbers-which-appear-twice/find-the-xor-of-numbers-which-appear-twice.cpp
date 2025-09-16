class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums)
    {
        vector<int> arr;
        unordered_map<int,int> freq;
        for (int i:nums)
        {
            freq[i]++;
            if (freq[i]==2) arr.push_back(i);
        }
        if (arr.size()==0) return 0;
        int ans=arr[0];
        for (int i=1 ; i<arr.size() ; i++)
        {
            ans=ans^arr[i];
        }
        return ans;
    }
};
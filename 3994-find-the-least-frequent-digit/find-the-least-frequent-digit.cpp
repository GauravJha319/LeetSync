class Solution {
public:
    int getLeastFrequentDigit(int n)
    {
        unordered_map<int,int> freq;
        while (n)
        {
            int d=n%10;
            n/=10;
            freq[d]++;
        }
        int ans=INT_MAX, val;
        for (auto x:freq)
        {
            if (x.second<ans)
            {
                ans=x.second;
                val=x.first;
            }
            else if (x.second==ans)
            {
                if (x.first<val) val=x.first;
            }
        }
        return val;
    }
};
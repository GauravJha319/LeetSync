class Solution {
public:
    int sod (int x)
    {
        int sum=0;
        while (x)
        {
            int d=x%10;
            sum+=d;
            x=x/10;
        }
        return sum;
    }
    int countLargestGroup(int n)
    {
        unordered_map<int,int> freq;
        int max=0;
        for (int i=1 ; i<=n ; i++)
        {
            int temp=sod(i);
            freq[temp]++;
            if (freq[temp]>=max) max=freq[temp];
        }
        int ans=0;
        for (auto i:freq)
        {
            if (i.second==max) ans++;
        }
        return ans;
    }
};
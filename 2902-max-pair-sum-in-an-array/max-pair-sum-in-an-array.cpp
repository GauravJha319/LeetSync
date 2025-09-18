class Solution {
public:
    int maxSum(vector<int>& nums)
    {
        int max=0;
        unordered_map<int,int> freq;
        unordered_map<int,int> lar_dig;
        for (int i:nums)
        {
            int num=i;
            int digit=0;
            while (i)
            {
                if (i%10>digit)
                {
                    digit=i%10;
                }
                i=i/10;
            }
            freq[digit]++;
            lar_dig[num]=digit;
        }
        bool flag=0;
        for (int i=9 ; i>=1 ; i--)
        {
            int num1=0, num2=0;
            if (freq[i]>=2)
            {
                flag=1;
                for (int j:nums)
                {
                    if (lar_dig[j]==i)
                    {
                        if (j>num1)
                        {
                            if (num1>num2) num2=num1;
                            num1=j;
                        }
                        else if (j>num2) num2=j;
                    }
                }
                if (num1+num2>max) max=num1+num2;
            }
        }
        if (flag==0) return -1;
        return max;
    }
};
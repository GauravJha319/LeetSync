class Solution {
public:
    int maxProduct(int n)
    {
        vector<int> digits;
        int temp=n;
        while (temp)
        {
            int d=temp%10;
            digits.push_back(d);
            temp=temp/10;
        }
        int max1=0 , max2=0;
        for (int i=0 ; i<digits.size() ; i++)
        {
            if (digits[i]>max1)
            {
                max2=max1;
                max1=digits[i];
            }            
            else if (digits[i]==max1) max2=max1;
            else if (digits[i]>max2) max2=digits[i];
        }
        return max1*max2;
    }
};
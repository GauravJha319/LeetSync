class Solution {
public:
    int dig_prod (int x)
    {
        int prod=1;
        while (x)
        {
            int digit=x%10;
            prod*=digit;
            x/=10;
        }
        return prod;
    }
    int smallestNumber(int n, int t)
    {
        for (int i=n ; ; i++)
        {
            if (dig_prod(i)%t==0) return i;
        }
        return 0;
    }
};
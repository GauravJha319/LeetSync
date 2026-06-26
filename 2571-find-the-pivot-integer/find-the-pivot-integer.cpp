class Solution {
public:
    int pivotInteger(int n)
    {
        int left=(n*(n+1))/2;
        int right=n;
        int i=n-1;
        if (left==right) return n;
        while (i>=1)
        {
            left-=(i+1);
            right+=i;
            if (left==right) return i;
            i--;
        }
        return -1;
    }
};
class Solution {
public:
    bool isPerfectSquare (int x)
    {
        if (x<0) return false;
        long long temp=sqrt(x);
        return temp*temp==x;
    }
    bool judgeSquareSum(int c)
    {
        for (int i=0 ; i<=sqrt(c) ; i++)
        {
            long long smt=c-(i*i);
            if (isPerfectSquare(smt)) return true;
        }
        return false;
    }
};
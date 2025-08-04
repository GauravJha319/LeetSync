class Solution {
public:
    bool isPalindrome(int x)
    {
        long long revnum=0;
        int dup=x;
        while (dup>0)
        {
            int digit=dup%10;
            dup/=10;
            if (revnum*10+digit<=INT_MAX) revnum=(revnum*10)+digit;
        }
        if (x==revnum) return true;
        else return false;
    }
};
class Solution {
public:
    bool isSameAfterReversals(int num)
    {
        if (num%10==0 && log10(num)+1>1) return false;
        else return true;
    }
};
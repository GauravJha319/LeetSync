class Solution {
public:
    bool checkPerfectNumber(int num)
    {
        vector<int> divisors;
        int sum=0;
        for (int i=1 ; i<=num/2 ; i++)
        {
            if (num%i==0)
            {
                divisors.push_back(i);
                sum+=i;
            }
        }
        if (sum==num) return true;
        else return false;
    }
};
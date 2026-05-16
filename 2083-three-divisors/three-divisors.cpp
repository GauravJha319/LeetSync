class Solution {
public:
    bool isThree(int n)
    {
        if (n<=3) return false;
        int ans=2;
        for (int i=2 ; i<=n/2 ; i++)
        {
            if (n%i==0) ans++;
        }
        if (ans!=3) return false;
        return true;
    }
};
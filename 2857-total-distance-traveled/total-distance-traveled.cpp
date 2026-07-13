class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank)
    {
        int ans=0, temp=0;
        while (mainTank)
        {
            ans+=10;
            mainTank--;
            temp++;
            if (temp==5 && additionalTank>0) {mainTank++;temp=0;additionalTank--;}
        }
        return ans;
    }
};
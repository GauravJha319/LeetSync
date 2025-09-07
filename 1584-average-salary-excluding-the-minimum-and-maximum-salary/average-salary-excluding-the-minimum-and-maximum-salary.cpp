class Solution {
public:
    double average(vector<int>& salary)
    {
        double min=INT_MAX , max=0 , sum=0;
        for (int i:salary)
        {
            if (i<min) min=i;
            if (i>max) max=i;
            sum+=i;
        }
        sum=sum-min-max;
        double ans=sum/(salary.size()-2);
        return ans;
    }
};
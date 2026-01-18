class Solution {
public:
    bool check (vector<int>& dist , double hour, int mid)
    {
        double time=0;
        for (int i=0 ; i<dist.size() ; i++)
        {
            if (i!=dist.size()-1) time+=ceil((double)dist[i]/mid);
            else time+=(double)dist[i]/mid;
        }
        return (time<=hour);
    }
    int minSpeedOnTime(vector<int>& dist, double hour)
    {
        int l=1 , r=10000000;
        int mid=(l+r)/2;
        int ans=-1;
        while (l<=r)
        {
            if (check (dist,hour,mid))
            {
                ans=mid;
                r=mid-1;
                mid=(l+r)/2;
            }
            else 
            {
                l=mid+1;
                mid=(l+r)/2;
            }
        }
        return ans;
    }
};
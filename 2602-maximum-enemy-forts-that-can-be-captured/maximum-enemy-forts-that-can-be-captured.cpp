class Solution {
public:
    int captureForts(vector<int>& forts)
    {
        int max=0;
        int s=0 , e=forts.size()-1;
        while ((forts[s]==0 || forts[e]==0) && (s<forts.size()-1) && e>=0 )
        {
            if (forts[s]==0)s++;
            if (forts[e]==0)e--;
        }
        while (s<=e)
        {
            if (forts[s]==1)
            {
                int temp=0;
                for (int i=s+1 ; i<=e ; i++)
                {
                    if (forts[i]==0) temp++;
                    else if (forts[i]==-1)
                    {
                        if (temp>max) max=temp;
                        s=i;
                        break;
                    }
                    else
                    {
                        s=i;
                        break;
                    }
                }
            }
            else if (forts[s]==-1)
            {
                int temp=0;
                for (int i=s+1 ; i<=e ; i++)
                {
                    if (forts[i]==0) temp++;
                    else if (forts[i]==1)
                    {
                        if (temp>max) max=temp;
                        s=i;
                        break;
                    }
                    else
                    {
                        s=i;
                        break;
                    }
                }
            }
            else if (forts[s]==0) s++;
            if (s==e) s++;
        }
        return max;
    }
};
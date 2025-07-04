class Solution {
public:
    int getMaximumGenerated(int n)
    {
        int max=0;
        vector<int> arr(n+1);
        arr[0]=0;
        if (n>=1)
        {
            arr[1]=1;
            max=1;
        }
        int i=2;
        while (i<=n)
        {
            if (i%2==0)
            {
                int temp=i/2;
                arr[i]=arr[temp];
            }
            else
            {
                int temp=(i-1)/2;
                arr[i]=arr[temp]+arr[temp+1];
            }
            if (arr[i]>max) max=arr[i];
            i++;
        }
        return max;
    }
};
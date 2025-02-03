class Solution {
public:
    int buttonWithLongestTime(vector<vector<int>>& events) 
    {
        int n=events.size();
        int max=events[0][1];
        int index=0;
        for (int i=1 ; i<n ; i++)
        {
            if (events[i][1]-events[i-1][1]>max)
            {max=events[i][1]-events[i-1][1]; index=i;}
            else if (events[i][1]-events[i-1][1]==max)
            {
                if (events[i][0]<events[index][0]) index=i;
            }
        }
        return events[index][0];
    }
};
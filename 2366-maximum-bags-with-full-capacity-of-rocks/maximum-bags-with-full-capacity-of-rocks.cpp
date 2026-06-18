class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks)
    {
        vector<vector<int>>map;
        for (int i=0 ; i<rocks.size() ; i++)
        {
            vector<int> temp(3);
            temp[0]=capacity[i]-rocks[i];
            temp[1]=capacity[i];
            temp[2]=rocks[i];
            map.push_back(temp);
        }
        sort (map.begin(),map.end());
        int ans=0;
        for (int i=0 ; i<rocks.size() ; i++)
        {
            if (additionalRocks==0) break;
            if (map[i][0]==0) {ans++;continue;}
            if (additionalRocks>=map[i][0])
            {
                ans++;
                additionalRocks-=map[i][0];
            }
        }
        return ans;
    }
};
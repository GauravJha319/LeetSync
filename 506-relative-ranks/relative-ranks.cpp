class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score)
    {
        vector<int> temp=score;
        sort (temp.begin(),temp.end(),greater<int>());
        vector<string> ans;
        unordered_map<int,string> map;
        for (int i=0 ; i<temp.size() ; i++)
        {
            if (i==0) map[temp[0]]="Gold Medal";
            else if (i==1) map[temp[1]]="Silver Medal";
            else map[temp[2]]="Bronze Medal";
        }
        int anu=4;
        for (int i=3 ; i<score.size() ; i++)
        {
            map[temp[i]]=to_string(anu);
            anu++;
        }
        for (int i=0 ; i<score.size() ; i++)
        {
            ans.push_back(map[score[i]]);
        }
        return ans;
    }
};
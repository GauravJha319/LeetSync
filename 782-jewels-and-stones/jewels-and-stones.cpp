class Solution {
public:
    int numJewelsInStones(string jewels, string stones)\
    {
        int count=0;
        for (char ch:stones)
        {
            if (find (jewels.begin(),jewels.end(),ch)!=jewels.end())
            count++;
        }
        return count;
    }
};
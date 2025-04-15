class Solution {
public:
    char repeatedCharacter(string s)
    {
        vector<int> res(26,0);
        for (char c:s)
        {
            if (++res[c-'a']==2) 
            {return c;}
        }
        return 0;
    }
};
class Solution {
public:
    bool isPrefixString(string s, vector<string>& words)
    {
        string con="";
        for (string str:words)
        {
            if (con==s) return true;
            else 
            {
                con+=str;
                if (con==s) return true;
            }
        }
        return false;
    }
};
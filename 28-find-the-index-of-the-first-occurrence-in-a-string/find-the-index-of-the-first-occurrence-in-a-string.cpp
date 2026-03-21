class Solution {
public:
    int strStr(string haystack, string needle)
    {
        string window="";
        for (int i=0 ; i<needle.size() ; i++) window.push_back(haystack[i]);
        if (window==needle) return 0;
        for (int i=needle.size() ; i<haystack.size() ; i++)
        {
            window.erase(0,1);
            window.push_back(haystack[i]);
            if (window==needle) return i-needle.size()+1;
        }
        return -1;
    }
};
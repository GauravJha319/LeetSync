class Solution {
public:
    bool isPalindrome(string s)
    {
        int st=0 , e=s.size()-1;
        while (st<e)
        {
            if (isalnum(s[st]) && isalnum(s[e]))
            {
                if (tolower(s[st])==tolower(s[e]))
                {
                    st++;
                    e--;
                }
                else return false;
            }
            else if (!isalnum(s[st])) st++;
            else if (!isalnum(s[e])) e--;
        }
        return true;
    }
};
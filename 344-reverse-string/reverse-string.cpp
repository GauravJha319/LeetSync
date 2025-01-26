class Solution {
public:
    void reverseString(vector<char>& s)
    {
        int n=0;
        for (int i=0 ; i<s.size() ; i++)
        {n++;}

        int st=0 , e=n-1;
        while (st<e)
        {swap(s[st++],s[e--]);}
    }
};
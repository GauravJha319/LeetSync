class Solution {
public:
    string reverseWords(string s)
    {
        int temp=0;
        for (int i=0 ; i<s.size() ; i++)
        {
            if (s[i]==' ')
            {
                reverse (s.begin()+temp , s.begin()+i);
                temp=i+1;
            }
            if (i==s.size()-1) reverse (s.begin()+temp , s.begin()+i+1);
        }
        return s;
    }
};
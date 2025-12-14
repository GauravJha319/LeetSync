class Solution {
public:
    string sortSentence(string s)
    {
        vector<string> res(9,"");
        string temp="";
        for (int i=0 ; i<s.size() ; i++)
        {
            char ch=s[i];
            if ((ch-'a'>=0 && ch-'a'<=25)||(ch-'A'>=0 && ch-'A'<=25)) temp+=ch;
            else if (ch-'1'>=0 && ch-'9'<=8)
            {
                int x=ch-'1';
                res[x]=temp;
                temp="";
            }
            else temp="";
        }
        string ans="";
        for (int i=0 ; i<9 ; i++)
        {
            if (i==8) ans+=res[i];
            else if (res[i]!="" && res[i+1]!="") ans+=res[i]+" ";
            else if (res[i]!="" && res[i+1]=="") ans+=res[i];
        }
        return ans;
    }
};
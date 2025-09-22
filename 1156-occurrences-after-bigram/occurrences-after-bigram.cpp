class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second)
    {
        vector<string> ans;
        vector<string> temp;
        string str="";
        for (int i=0 ; i<text.size() ; i++)
        {
            if (text[i]==' ')
            {
                temp.push_back(str);
                str="";
            }
            else str+=text[i];
        }
        temp.push_back(str);
        for (int i=0 ; i<temp.size()-2 ; i++)
        {
            if (temp[i]==first && temp[i+1]==second)
            {ans.push_back(temp[i+2]);}
        }
        return ans;
    }
};
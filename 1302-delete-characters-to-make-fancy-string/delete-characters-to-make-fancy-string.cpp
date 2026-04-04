class Solution {
public:
    string makeFancyString(string s)
    {
        string ans="";
        stack<char> st;
        for (int i=0 ; i<s.size() ; i++)
        {
            if (st.empty()) st.push(s[i]);
            else if (st.top()==s[i] && s[i]==s[i+1])
            {
                continue;
            }
            else
            {
                st.push(s[i]);
            }
        }
        int n=st.size();
        for (int i=0 ; i<n ; i++)
        {
            char temp=st.top();
            st.pop();
            ans.push_back(temp);
        }
        reverse (ans.begin(),ans.end());
        return ans;
    }
};
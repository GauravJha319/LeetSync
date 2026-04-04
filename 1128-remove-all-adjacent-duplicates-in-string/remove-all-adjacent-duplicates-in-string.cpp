class Solution {
public:
    string removeDuplicates(string s)
    {
        stack<char> st;
        string ans="";
        for (int i=0 ; i<s.size() ; i++)
        {
            if (st.empty()) st.push(s[i]);
            else if (st.top()==s[i])
            {
                st.pop();
            }
            else st.push(s[i]);
        }
        int n=st.size();
        for (int i=0 ; i<n ; i++)
        {
            char temp=st.top();
            st.pop();
            ans.push_back(temp);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
class Solution {
public:
    string removeStars(string s)
    {
        string ans="";
        stack<char>st;
        for (char ch:s)
        {
            if (!st.empty() && ch=='*')
            {
                st.pop();
            }
            if (ch!='*') st.push(ch);
        }
        while (!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
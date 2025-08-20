class Solution {
public:
    int maxDepth(string s)
    {
        stack<int> st;
        int max=0;
        for (char ch:s)
        {
            if (ch==')')
            {
                if (st.size()>max) max=st.size();
                st.pop();
            }
            else if (ch=='(') st.push('(');
        }
        return max;
    }
};
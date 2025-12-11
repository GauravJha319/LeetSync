class Solution {
public:
    string clearDigits(string s)
    {
        stack<char> st;
        for (char ch:s)
        {
            int temp=ch-'0';
            if (temp>=0 && temp<=9)
            {
                int temp1=st.top()-'0';
                if (temp1>=0 && temp1<=9) st.push(ch);
                else st.pop(); 
            }
            else st.push(ch);
        }
        string ans;
        while (!st.empty())
        {
            char temp=st.top();
            ans.push_back(temp);
            st.pop();
        }
        reverse (ans.begin(),ans.end());
        return ans;
    }
};
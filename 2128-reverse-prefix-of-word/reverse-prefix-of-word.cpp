class Solution {
public:
    string reversePrefix(string word, char ch)
    {
        stack<char> st;
        int i;
        for (i=0 ; i<word.size() ; i++)
        {
            if (word[i]==ch)
            {
                st.push(word[i]);
                break;
            }
            else st.push(word[i]);
        }
        if (i==word.size()) return word;
        else
        {
            for (int j=0 ; j<=i ; j++)
            {
                int temp=st.top();
                st.pop();
                word[j]=temp;
            }
        }
        return word;
    }
};
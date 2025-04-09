class Solution {
public:
    bool isValid(string s)
{
    vector<char> stack;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            stack.push_back(s[i]);
        }
        else
        {
            if (stack.empty()) return false;

            char top = stack.back();

            if ((s[i] == ')' && top != '(') ||
                (s[i] == '}' && top != '{') ||
                (s[i] == ']' && top != '['))
            {
                return false;
            }

            stack.pop_back();
        }
    }

    return stack.empty();
}
};
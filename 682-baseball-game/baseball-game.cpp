class Solution {
public:
    int calPoints(vector<string>& operations)
    {
        stack<int> score;
        for (string s:operations)
        {
            if (s=="+")
            {
                int a=score.top();
                score.pop();
                int b=score.top();
                score.push(a);
                score.push(a+b);
            }
            else if (s=="D")
            {
                int a=score.top();
                score.push(a*2);
            }
            else if (s=="C")
            {
                score.pop();
            }
            else
            {
                int a=stoi(s);
                score.push(a);
            }
        }
        int ans=0;
        while (!score.empty())
        {
            ans+=score.top();
            score.pop();
        }
        return ans;
    }
};
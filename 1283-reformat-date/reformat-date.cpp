class Solution {
public:
    string reformatDate(string date)
    {
        string ans="";
        for (int i=date.size()-4 ; i<date.size() ; i++)
        {
            ans.push_back(date[i]);
        }
        ans.push_back('-');
        string temp="";
        for (int i=date.size()-8 ; i<date.size()-5 ; i++)
        {
            temp.push_back(date[i]);
        }
        if (temp=="Jan")
        {
            ans.push_back('0');
            ans.push_back('1');
            ans.push_back('-');
        }
        else if (temp=="Feb")
        {
            ans.push_back('0');
            ans.push_back('2');
            ans.push_back('-');
        }
        else if (temp=="Mar")
        {
            ans.push_back('0');
            ans.push_back('3');
            ans.push_back('-');
        }
        else if (temp=="Apr")
        {
            ans.push_back('0');
            ans.push_back('4');
            ans.push_back('-');
        }
        else if (temp=="May")
        {
            ans.push_back('0');
            ans.push_back('5');
            ans.push_back('-');
        }
        else if (temp=="Jun")
        {
            ans.push_back('0');
            ans.push_back('6');
            ans.push_back('-');
        }
        else if (temp=="Jul")
        {
            ans.push_back('0');
            ans.push_back('7');
            ans.push_back('-');
        }
        else if (temp=="Aug")
        {
            ans.push_back('0');
            ans.push_back('8');
            ans.push_back('-');
        }
        else if (temp=="Sep")
        {
            ans.push_back('0');
            ans.push_back('9');
            ans.push_back('-');
        }
        else if (temp=="Oct")
        {
            ans.push_back('1');
            ans.push_back('0');
            ans.push_back('-');
        }
        else if (temp=="Nov")
        {
            ans.push_back('1');
            ans.push_back('1');
            ans.push_back('-');
        }
        else if (temp=="Dec")
        {
            ans.push_back('1');
            ans.push_back('2');
            ans.push_back('-');
        }
        bool flag=1;
        for (int i=0 ; i<=1 ; i++)
        {
            if (date[i]-'0'>=0 && date[i]-'0'<=9) flag=1;
            else flag=0;
        }
        if (flag==1)
        {
            ans.push_back(date[0]);
            ans.push_back(date[1]);
        }
        else
        {
            ans.push_back('0');
            ans.push_back(date[0]);
        }
        return ans;
    }
};
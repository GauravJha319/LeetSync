class Solution {
public:
    int largestInteger(int num)
    {
        vector<int> odd;
        vector<int> even;
        int ans=0;
        vector<char> seq;
        int temp=num;
        while (temp)
        {
            int digit=temp%10;
            temp=temp/10;
            if (digit%2==0)
            {
                even.push_back(digit);
                seq.push_back('e');
            }
            else
            {
                odd.push_back(digit);
                seq.push_back('o');
            }
        }
        reverse(seq.begin(), seq.end());
        sort(odd.begin(), odd.end(), greater<int>());
        sort(even.begin(), even.end(), greater<int>());
        int i=0;
        while (!odd.empty() || !even.empty())
        {
            if (seq[i]=='e')
            {
                ans=ans*10+even[0];
                even.erase(even.begin());
                i++;
            }
            else
            {
                ans=ans*10+odd[0];
                odd.erase(odd.begin());
                i++;
            }
        }
        return ans;
    }
};
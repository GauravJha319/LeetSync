class Solution {
public:
    int lengthOfLongestSubstring(string s)
    {
        if (s.empty()) return 0;
    
        unordered_map<char,int> freq;
        int l=0,r=0;
        int ans=1;
        while (l<s.size() && r<s.size())
        {
            if (freq[s[r]]+1>1)
            {
                ans=max(r-l,ans);
                freq[s[r]]++;
                while (freq[s[r]]>1)
                {
                    freq[s[l]]--;
                    l++;
                }
                r++;
            }
            else
            {
                freq[s[r]]++;
                r++;
                ans=max(r-l,ans);
            }
        }
        return ans;
    }
};
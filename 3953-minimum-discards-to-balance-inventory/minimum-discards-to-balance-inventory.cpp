class Solution {
public:
    int minArrivalsToDiscard(vector<int>& arrivals, int w, int m)
    {
        int ans=0;
        unordered_map<int,int> freq;
        vector<int> window;
        for (int i=0 ; i<arrivals.size() ; i++)
        {
            if (i>=w && window[i-w]!=0) freq[arrivals[i-w]]--;
            freq[arrivals[i]]++;
            window.push_back(arrivals[i]);
            if (freq[arrivals[i]]>m)
            {
                ans++;
                freq[arrivals[i]]--;
                window[i]=0;
            }
        }
        return ans;
    }
};
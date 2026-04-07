class Solution {
public:
    string shrinker (string x)
    {
        vector<int> map(26,0);
        for (char ch:x)
        {
            map[ch-'a']++;
        }
        string ans="";
        for (int i=0 ; i<26 ; i++)
        {
            if (map[i]>0) ans.push_back('a'+i);
        }
        return ans;
    }
    int similarPairs(vector<string>& words)
    {
      vector<string> shrink;
      for (string i:words)
      {
        string temp=shrinker(i);
        shrink.push_back(temp);
      }
      int count=0;
      for (int i=0 ; i<shrink.size()-1 ; i++)
      {
        for (int j=i+1 ; j<shrink.size() ; j++)
        {
            if (shrink[i]==shrink[j]) count++;
        }
      }
      return count;
    }
};
class Solution {
public:
    int numberOfSpecialChars(string word)
    {
        vector<int> small(26,0);
        vector<int> big(26,0);
        for (char i:word)
        {
            if (int(i)>=65 && int(i)<=90) big[i-'A']=1;
            else if (int(i)>=97 && int(i)<=122) small[i-'a']=1;
        }
        int count=0;
        for (int i=0 ; i<26 ; i++)
        {
            if (big[i]==1 && small[i]==1) count++; 
        }
        return count;
    }
};
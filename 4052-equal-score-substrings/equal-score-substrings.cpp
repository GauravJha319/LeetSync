class Solution {
public:
    bool scoreBalance(string s)
    {
        int count=0;
        for (char ch:s)
        {
            count+=ch-'a'+1;
        }
        if (count%2!=0) return false;
        int half=count/2;
        for (char ch:s)
        {
            count-=ch-'a'+1;
            if (count==half) return true;
        }
        return false;
    }
};
class Solution {
public:
    int furthestDistanceFromOrigin(string moves)
    {
        int countL=0,countR=0,count_=0;
        for (char ch:moves)
        {
            if (ch=='L') countL++;
            else if (ch=='R') countR++;
            else count_++;
        }
        if (countL>countR) return countL-countR+count_;
        else return countR-countL+count_;
    }
};
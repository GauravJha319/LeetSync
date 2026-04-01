class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k)
    {
        int n=answerKey.size() , cnt=0 , left=0 , len=0;
        for (int i=0 ; i<n ; i++)
        {
            if (answerKey[i]=='F')
            {
                cnt++;
            }
            while (cnt>k)
            {
                if (answerKey[left]=='F') cnt--;
                left++;
            }
            len=max(len,i-left+1);
        }
        left=0 , cnt=0;
        for (int i=0 ; i<n ; i++)
        {
            if (answerKey[i]=='T')
            {
                cnt++;
            }
            while (cnt>k)
            {
                if (answerKey[left]=='T') cnt--;
                left++;
            }
            len=max(len,i-left+1);
        }
        return len;
    }
};
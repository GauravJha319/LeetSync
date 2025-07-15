class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord)
    {
        int wordcount=0;
        int strsize=searchWord.size();
        int temp=0;
        for (int i=0 ; i<sentence.size() ; i++)
        {
            if (sentence[i]==' ' || i==sentence.size()-1)
            {
                string sub=sentence.substr(temp,strsize);
                if (sub==searchWord) return ++wordcount;
                else
                {
                    temp=i+1;
                    wordcount++;
                }
            }
        }
        return -1;
    }
};
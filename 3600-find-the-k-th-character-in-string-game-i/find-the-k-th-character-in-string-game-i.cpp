class Solution {
public:
    char kthCharacter(int k)
    {
        string word="a";
        while (word.size()<k)
        {
            int size=word.size();
            for (int i=0 ; i<size ; i++)
            {
                int temp=word[i];
                word=word+char(++temp);
            }
        }
        return word[k-1];
    }
};
class Solution {
public:
    int minimumRecolors(string blocks, int k)
    {
        int min=blocks.size();
        int white=0;
        for (int i=0 ; i<k ; i++)
        {
            if (blocks[i]=='W') white++;
        }
        if (white<min) min=white;
        for (int j=k ; j<blocks.size() ; j++)
        {
            if (blocks[j-k]=='W') white--;
            if (blocks[j]=='W') white++;
            if (white<min) min=white;
        }
        return min;
    }
};
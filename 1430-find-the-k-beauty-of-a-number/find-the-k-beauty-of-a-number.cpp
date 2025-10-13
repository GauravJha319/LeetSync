class Solution {
public:
    int divisorSubstrings(int num, int k)
    {
        int count=0;
        string temp=to_string(num);
        for (int i=0 ; i<=temp.size()-k ; i++)
        {
            string sub=temp.substr(i,k);
            int number=stoi(sub);
            if (number!=0 && num%number==0) count++;
        }
        return count;
    }
};
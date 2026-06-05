class Solution {
public:
    int majorityElement(vector<int>& nums)
    {
        int ele=0, count=0;
        for (int i:nums)
        {
            if (count==0) {ele=i;count++;}
            else
            {
                if (i==ele) count++;
                else if (i!=ele) count--;
            }
        }
        return ele;
    }
};
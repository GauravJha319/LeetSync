class Solution {
public:
    bool ifsatisfied (vector<int> &nums)
    {
        int arr[101]={0};
        for (int i=0 ; i<nums.size() ; i++)
        {arr[nums[i]]++;}

        for (int i=0 ; i<100 ; i++)
        {if (arr[i]>1) return 0;}
        return 1;
    }
    int minimumOperations(vector<int>& nums)
    {
        int opcount=0;
        while (!ifsatisfied (nums))
        {
            opcount++;
            if (nums.size()>=3)
            {nums.erase(nums.begin(), nums.begin() + 3);}
            else
            {break;}
        }
        return opcount;
    }
};
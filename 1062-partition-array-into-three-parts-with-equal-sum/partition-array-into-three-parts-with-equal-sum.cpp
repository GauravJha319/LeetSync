class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr)
    {
        int sum=0;
        for (int i:arr)
        {
            sum+=i;
        }
        if (sum%3!=0) return false;
        int req_sum=sum/3;
        int temp=0,count=0;
        for (int i=0 ; i<arr.size() ; i++)
        {
            temp+=arr[i];
            if (temp==req_sum)
            {
                count++;
                if (count==2 && i!=arr.size()-1) return true;
                temp=0;
            }
        }
        return false;
    }
};
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr)
    {
        int n=arr.size()-1;
        int max=arr[n];
        arr[n]=-1;
        for (int i=n-1 ; i>=0 ; i--)
        {
            int temp=arr[i];
            arr[i]=max;
            if (temp>max) max=temp;
        }
        return arr;
    }
};
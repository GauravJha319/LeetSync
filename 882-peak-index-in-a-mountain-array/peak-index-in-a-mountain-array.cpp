class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr)
    {
        int st=1 , e=arr.size()-2;
        int mid=st+(e-st)/2;
        if (arr[0]>arr[1]) return 0;
        if (arr[arr.size()-1]>arr[arr.size()-2]) return arr.size()-1;
        while (st<=e)
        {
            if (mid==0 && arr[mid]>arr[mid+1]) return 0;
            if (mid==arr.size()-1 && arr[mid]>arr[mid-1]) return arr.size()-1;
            if (arr[mid-1]<arr[mid] && arr[mid+1]<arr[mid]) return mid;
            else if (arr[mid-1]<arr[mid] && arr[mid+1]>arr[mid]) st=mid+1;
            else if (arr[mid-1]>arr[mid] && arr[mid+1]<arr[mid]) e=mid-1;
            mid=st+(e-st)/2;
        }
        return 0;
    }
};
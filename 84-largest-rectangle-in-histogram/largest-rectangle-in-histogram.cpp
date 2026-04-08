class Solution {
public:
    int largestRectangleArea(vector<int>& heights)
    {
        int n=heights.size();
        vector<int> SEL(n);
        stack<int> st;
        for (int i=0 ; i<heights.size() ; i++)
        {
            while (!st.empty() && heights[st.top()]>=heights[i]) st.pop();
            SEL[i]=st.empty() ? -1:st.top();
            st.push(i);
        }
        st=stack<int>();
        vector<int> SER(n);
        for (int i=n-1 ; i>=0 ; i--)
        {
            while (!st.empty() && heights[st.top()]>=heights[i]) st.pop();
            SER[i]=st.empty() ? n:st.top();
            st.push(i);
        }
        int area=0;
        for (int i=0 ; i<n ; i++)
        {
            area=max(area,heights[i]*(SER[i]-(SEL[i]+1)));
        }
        return area;
    }
};
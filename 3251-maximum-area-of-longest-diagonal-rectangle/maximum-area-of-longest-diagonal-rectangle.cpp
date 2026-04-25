class Solution {
public:
    int d (int l , int w)
    {
        return l*l+w*w;
    }
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions)
    {
        int diagonal , area;
        diagonal=d(dimensions[0][0],dimensions[0][1]);
        area=dimensions[0][0]*dimensions[0][1];
        for (int i=1 ; i<dimensions.size() ; i++)
        {
            if (d(dimensions[i][0],dimensions[i][1])>diagonal)
            {
                diagonal=d(dimensions[i][0],dimensions[i][1]);
                area=dimensions[i][0]*dimensions[i][1];
            }
            else if (d(dimensions[i][0],dimensions[i][1])==diagonal)
            {
                area=max(area,dimensions[i][0]*dimensions[i][1]);
            }
        }
        return area;
    }
};
class Solution 
{
public:
    int reverse(int x) 
    {
        int max=INT_MAX , min=INT_MIN;
        int y=0, digit;
        while(x!=0)
        {
            digit=x%10;
            x/=10;
            if(y<min/10 || y>max/10)
            {return 0;}
            y=(y*10)+digit;
        }
        return y;
    }
};
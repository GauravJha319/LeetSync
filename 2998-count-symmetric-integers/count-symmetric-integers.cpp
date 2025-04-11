class Solution {
public:
    bool isSymmetric(int num)
    {
        string s = to_string(num);
        int n = s.length();

        if (n % 2 != 0) return false;

        int half = n / 2;
        int sum1 = 0, sum2 = 0;

        for (int i = 0; i < half; ++i)
        {
            sum1 += s[i] - '0';
            sum2 += s[i + half] - '0';
        }
        return sum1 == sum2;
    }
    int countSymmetricIntegers(int low, int high)
    {
        int count = 0;
        for (int i = low; i <= high; ++i)
        {
            if (isSymmetric(i))
            {
                count++;
            }
        }
        return count;
    }
};
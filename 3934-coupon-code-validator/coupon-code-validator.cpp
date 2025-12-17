class Solution {
public:
    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive)
    {
        int n=code.size();
        vector<string> electronicsB;
        vector<string> pharmacyB;
        vector<string> restaurantB;
        vector<string> groceryB;
        for (int i=0 ; i<n ; i++)
        {
            bool flag=0;
            if (code[i]=="") flag=1;
            for (char ch:code[i])
            {
                if (isalnum(ch) || ch=='_') flag=0;
                else
                {
                    flag=1;
                    break;
                }
            }
            if (flag==0)
            {
                if (businessLine[i]=="electronics" && isActive[i]==true) electronicsB.push_back(code[i]);
                else if (businessLine[i]=="grocery" && isActive[i]==true) groceryB.push_back(code[i]);
                else if (businessLine[i]=="restaurant" && isActive[i]==true) restaurantB.push_back(code[i]);
                else if (businessLine[i]=="pharmacy" && isActive[i]==true) pharmacyB.push_back(code[i]);
            }
        }
        sort (electronicsB.begin(),electronicsB.end());
        sort (groceryB.begin(),groceryB.end());
        sort (pharmacyB.begin(),pharmacyB.end());
        sort (restaurantB.begin(),restaurantB.end());
        vector<string> ans;
        for (int i=0 ; i<electronicsB.size() ; i++) ans.push_back(electronicsB[i]);
        for (int i=0 ; i<groceryB.size() ; i++) ans.push_back(groceryB[i]);
        for (int i=0 ; i<pharmacyB.size() ; i++) ans.push_back(pharmacyB[i]);
        for (int i=0 ; i<restaurantB.size() ; i++) ans.push_back(restaurantB[i]);
        return ans;
    }
};
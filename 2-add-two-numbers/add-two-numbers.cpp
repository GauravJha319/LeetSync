/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution{
public:
    vector<int> digits(int n)
    {
        vector<int> ans(2,0);
        ans[1]=n%10;
        n/=10;
        ans[0]=n;
        return ans;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        int carry=0;
        ListNode* temp1=l1;
        ListNode* temp2=l2;
        ListNode* prev=NULL;
        while (temp1 && temp2)
        {
            int sum=carry+temp1->val+temp2->val;
            vector<int> add=digits(sum);
            temp1->val=add[1];
            carry=add[0];
            prev=temp1;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        while (temp1)
        {
            int sum=carry+temp1->val;
            vector<int> add=digits(sum);
            temp1->val=add[1];
            carry=add[0];
            prev=temp1;
            temp1=temp1->next;
        }
        while (temp2)
        {
            int sum=carry+temp2->val;
            vector<int> add=digits(sum);
            ListNode* ps=new ListNode(add[1],NULL);
            prev->next=ps;
            carry=add[0];
            prev=prev->next;
            temp2=temp2->next;
        }
        if (carry!=0)
        {
            ListNode* last=new ListNode(carry,NULL);
            prev->next=last;
        }
        return l1;
    }
};
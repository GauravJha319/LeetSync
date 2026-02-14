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
class Solution {
public:
    ListNode* middleNode(ListNode* head)
    {
        if (head==nullptr) return head;
        int size=0;
        ListNode* temp=head;
        while (temp)
        {
            size++;
            temp=temp->next;
        }
        int mid;
        if (size%2==0) mid=(size/2)+1;
        else mid=(size+1)/2;
        ListNode* temp2=head;
        for (int i=0 ; i<mid-1 ; i++)
        {
            temp2=temp2->next;
        }
        return temp2;
    }
};
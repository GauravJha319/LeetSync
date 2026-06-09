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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)
    {
        if (list1==NULL) return list2;
        else if (list2==NULL) return list1;
        ListNode* temp1=list1;
        ListNode* temp2=list2;
        ListNode* new_head;
        ListNode* curr;
        if (temp1->val<=temp2->val)
        {
            new_head=temp1;
            temp1=temp1->next;
        }
        else if (temp2->val<temp1->val)
        {
            new_head=temp2;
            temp2=temp2->next;
        }
        curr=new_head;
        while (temp1 && temp2)
        {
            if (temp1->val<=temp2->val)
            {
                curr->next=temp1;
                temp1=temp1->next;
            }
            else if (temp2->val<temp1->val)
            {
                curr->next=temp2;
                temp2=temp2->next;
            }
            curr=curr->next;
        }
        while (temp1)
        {
            curr->next=temp1;
            temp1=temp1->next;
            curr=curr->next;
        }
        while (temp2)
        {
            curr->next=temp2;
            temp2=temp2->next;
            curr=curr->next;
        }
        return new_head;
    }
};
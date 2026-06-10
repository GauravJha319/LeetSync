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
    ListNode* removeNthFromEnd(ListNode* head, int n)
    {
        ListNode* temp=head;
        if (head==NULL) return head;
        int count=0;
        while (temp)
        {
            count++;
            temp=temp->next;
        }
        int req=count-n+1;
        temp=head;
        ListNode* prev=head;
        if (req==1) return head->next;
        count=0;
        while (temp)
        {
            count++;
            if (count==req)
            {
                prev->next=temp->next;
                delete temp;
                return head;
            }
            prev=temp;
            temp=temp->next;
        }
        return NULL;
    }
};
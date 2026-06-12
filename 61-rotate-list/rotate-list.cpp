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
    ListNode* rotateRight(ListNode* head, int k)
    {
        if (head==NULL || head->next==NULL) return head;
        int len=0;
        ListNode* tail=head;
        while (tail->next)
        {
            len++;
            tail=tail->next;
        }
        len++;
        if (k%len==0) return head;
        k=k%len;
        ListNode* dummy=head;
        tail->next=dummy;
        for (int i=1 ; i<=len-k-1 ; i++) dummy=dummy->next;
        ListNode* new_h=dummy->next;
        dummy->next=NULL;
        return new_h;
    }
};
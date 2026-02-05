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
    ListNode* deleteDuplicates(ListNode* head)
    {
        unordered_map<int,int> freq;
        ListNode* temp=head;
        ListNode* prev=NULL;
        while (temp)
        {
            if (freq[temp->val]>=1)
            {
                prev->next=prev->next->next;
                delete temp;
                temp=prev->next;
            }
            else
            {
                freq[temp->val]++;
                prev=temp;
                temp=temp->next;
            }
        }
        return head;
    }
};
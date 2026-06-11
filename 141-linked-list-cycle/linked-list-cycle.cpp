/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head)
    {
        unordered_map<ListNode*,int> freq;
        ListNode* dummy=head;
        while (dummy)
        {
            if (freq[dummy]>0) return true;
            freq[dummy]++;
            dummy=dummy->next;
        }
        return false;
    }
};
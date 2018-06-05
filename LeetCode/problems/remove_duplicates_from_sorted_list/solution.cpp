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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head)   
            return NULL;
        ListNode *hd = head;
        while(hd && hd->next)
        {
            if(hd->val == hd->next->val)
            {
                hd->next = hd->next->next;
            }
            else
                hd=hd->next;
        }
        return head;        
    }
};
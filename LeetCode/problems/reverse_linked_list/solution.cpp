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
    ListNode* reverseList(ListNode* head) {
        ListNode* tmp =head,*t;
        head=NULL;
        while(tmp)
        {
            t=tmp;
            tmp=tmp->next;
            t->next =head;
            head=t;
        }
        return head;
    }
};
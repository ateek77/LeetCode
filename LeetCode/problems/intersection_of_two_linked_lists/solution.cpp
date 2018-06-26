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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode * fst = headA,*snd =headB;
        if(!headA || !headB)
            return headA ? headB : headA ;
        while(fst != snd)
        {
            fst = fst ? fst->next : headB;
            snd = snd ? snd->next : headA;
        }
        return fst ;
    }
};
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
    ListNode *detectCycle(ListNode *head) {
        if(!head)
            return head;
    
        ListNode *sl ,*fst ;
        sl  = fst =head;
        
        do
        {
            sl = sl->next;
            if(fst->next)
                fst = fst->next->next;
            else
                fst =fst->next;
        }while(fst && fst != sl);
        if(!fst)
            return NULL;
        fst =head;
        while(sl!=fst)
        {
            fst =fst->next;
            sl=sl->next;
        }
        return sl;
    }
};
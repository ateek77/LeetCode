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
    bool hasCycle(ListNode *head) {
        if(!head)
            return head;
        ListNode *sl=head,*fst = head ;
        
        do
        {
            sl=sl->next;
            if(fst->next)
                fst=fst->next->next;
            else
                fst = fst ->next;
        }while(fst && fst != sl);
        return fst!=NULL;
        
    }
};
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
        ListNode *p1,*p2;
        p1=p2=head;
        do{
            if(p2->next)    
                p2=p2->next->next;
            else
                p2=p2->next;
            p1=p1->next;
        }while(p2 && p1!=p2);
        if(!p2 ||!p2->next)
            return NULL;
        p1=head;
        while(p1!=p2){
            p1=p1->next;
            p2=p2->next;
        }
        return p1;
        
    }
};
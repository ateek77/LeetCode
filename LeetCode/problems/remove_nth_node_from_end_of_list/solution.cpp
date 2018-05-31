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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *hd =head,*f=head;
        
        while(n && hd )
        { 
            n--; 
            hd=hd->next;
        }   
        if(!n && !hd)
        { 
            return head->next;
        }     
        while(hd && hd->next)
        {
            hd=hd->next;
            f=f->next;
        }
        
      //  if(f->next)
            f->next=f->next->next;
        return head;
    }
};
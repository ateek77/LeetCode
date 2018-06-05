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
    ListNode* removeElements(ListNode* head, int val) {
        if(!head)
                return head; 
        ListNode *hd = head,*pre=NULL;
        int flg=1;
        while(hd )
        {
            flg=1;
            if(hd->val == val)
            {
                if(!pre)
                {
                    head = hd->next;
                }
                else
                {
                    pre->next=hd->next;
                    
                }
                flg=0;
 //               hd->next = hd->next->next; 
            }
            if(flg)
               pre=hd;
            hd=hd->next;            
        }
        return head;
    }
};
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
        ListNode *hd = head,*pre=NULL;
        int flg=1;
        while(hd && hd->next)
        {
            flg=1;
            while(hd->next && hd->val == hd->next->val)
            {
                hd = hd->next;
                flg=0;
            }
            if(!pre && !flg)
                head = hd = hd->next; 
            else if(flg)
            {
                pre = hd;
                hd=hd->next;
            }
            else
                pre->next = hd = hd->next;
            
        }
        return head;  
    }
};
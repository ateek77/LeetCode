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
    
    void reorderList(ListNode* head) {
        if(!head || !head->next)
            return ;
        ListNode *slow=head,*fast=head,*mid,*pre,*crnt,*nxt;
        // find the mid point of linked list 
        while(fast && fast->next )
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        
        mid=slow->next;
        slow->next=NULL;
        pre=NULL;
        crnt=mid;
        // reverse the linked list 
        while(crnt)
        {
            nxt=crnt->next;
            crnt->next = pre;
            pre=crnt;
            crnt=nxt;
        
        }
        
        mid=pre;
        crnt=head;
        //  merge the linked list
        while(crnt && mid)
        {
            nxt=mid->next;
            mid->next = crnt->next;
            crnt->next = mid;
            crnt = mid->next;
            mid=nxt;
        }
        
        return ;
    }
};
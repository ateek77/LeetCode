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

    ListNode* reverseKGroup(ListNode* h, int k) {
        if(!h || !h->next || k<2)
            return h;
        ListNode *head=h,*nxt=NULL,*pre=NULL;
        for(int i=0;i<k;++i)
        {
            if(head)
                head=head->next;
            else
                return h;
        }
        nxt = reverseKGroup(head,k);
        head=h;
        h=NULL;
        while(k--)
        {
            h=head->next;
            head->next  = pre ? pre : nxt; //           head=head->next;
            pre= head;
            head=h;
        }
        return pre;
    }
};
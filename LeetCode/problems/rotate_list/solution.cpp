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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || k==0)
            return head;
        ListNode *hd =head ,*sec,*pre,*crnt ;
        int n=1;
        // find length of linked list
        while(hd->next)
        {
            hd=hd->next;
            ++n;
        }
        pre = hd;
        k%=n;
        if(k==0)
            return head;
        
        hd=head;
        // devide the linked list
        for(int t=1; n-k > t;++t){
            hd=hd->next;
        }
        sec=hd->next;
        hd->next=NULL;
        pre->next =head;
        return sec;
        
      /*  pre =NULL;
        crnt =sec;
        // reverse second list
        while(crnt)
        {
            sec=crnt->next;
            crnt->next =pre;
            pre=crnt;
            crnt =sec;
        }
        sec=pre;
        
        // combine the list 
        while(sec)
        {
            crnt = sec->next;
            sec->next=head;
            head=sec;
            sec= crnt;
        }*/
        
        return head;
    }
};
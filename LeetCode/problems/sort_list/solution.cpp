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
    ListNode* merge(ListNode *l1,ListNode *l2)
    {
        if(!l1 && !l2)
            return NULL;
        else if(l1 && !l2)
            return l1;
        else if(!l1 && l2)
            return l2;
        else if(l1->val < l2->val)
        {
            l1->next = merge(l1->next ,l2);
            return l1;
        }
        else
        {
            l2->next =merge(l1,l2->next);
            return l2;
        }                
    }
    ListNode *partation(ListNode *head)
    {
        if(!head)
            return head;
        ListNode *sl,*fst;
        sl = fst =head;
        
        while(fst->next && fst->next->next)
        {
            sl=sl->next;
            fst =fst->next->next;
        }
        head =sl->next;
        sl->next=NULL;
        return head;
    }
    ListNode *merge_sort(ListNode *head)
    {
        if(!head || !head->next)
            return head;
        ListNode *hd2 =partation(head);
        head = merge_sort(head);
        hd2 = merge_sort(hd2);
        head = merge(head,hd2);
        return head;
    }
    
    ListNode* sortList(ListNode* head) {
        return merge_sort(head);
    }
};
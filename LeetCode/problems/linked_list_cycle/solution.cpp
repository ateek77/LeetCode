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
        if(!head) return 0;
        ListNode *p1,*p2;
        p1=head;p2=head->next;
        while(p1!=p2 &&p2&& p2->next){
            p2=p2->next->next;
            p1=p1->next;
        }
        if(p2==p1)  return 1;
        return 0;
    }
};
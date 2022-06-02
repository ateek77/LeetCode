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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA || !headB)
            return NULL;
        unordered_set<ListNode*> tmp;
        while(headA)
        {
            tmp.insert(headA);
            headA=headA->next;
        }
        while(headB){
            if(tmp.count(headB)){
                return headB;                
            }
            headB=headB->next;
        }
        return NULL;
    }
};
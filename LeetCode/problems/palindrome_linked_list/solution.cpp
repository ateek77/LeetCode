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
    bool isPalindrome(ListNode* head) {
        stack<int> s;
        ListNode *sl=head,*f=head;
        
        while(f && f->next)
        {
            s.push(sl->val);
            sl=sl->next;
            f=f->next->next;
        }
        if(f) 
            sl=sl->next;
        
        while(sl && !s.empty() && sl->val == s.top())
        {
            sl=sl->next;
            s.pop();
        }
        if(!sl && s.empty())
                return 1;
        else
                return 0;
    }
};
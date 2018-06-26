/**
 * Definition for singly-linked list with a random pointer.
 * struct RandomListNode {
 *     int label;
 *     RandomListNode *next, *random;
 *     RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
 * };
 */
class Solution {
public:
    RandomListNode *copyRandomList(RandomListNode *head) {
       
        if(!head)
            return head;
        
        map<RandomListNode *,RandomListNode *> mp;
        
        RandomListNode *nd=NULL,*hd2=NULL,*tmp=head;
        
        while(tmp)
        {
            nd =new RandomListNode(tmp->label);
           
            mp[tmp]=nd;
            tmp=tmp->next;
        }
        
        tmp = head;
        
        if(!hd2)
            hd2= mp[tmp];
        
        while(tmp)
        {
            mp[tmp]->random = mp[tmp->random];
            mp[tmp]->next  = mp[tmp->next];
            tmp = tmp->next;
        }
        return hd2;
    }
};
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
    void deleteNode(ListNode* node) {
        ListNode*temp=node,*prev=node;
    for(;temp->next!=NULL;temp=temp->next)
    {
        temp->val=temp->next->val;
        prev=temp;
    }
        prev->next=NULL;
        temp=NULL;
        //delete(temp);
      // delete(temp);
      //   ListNode*temp=head;
      //   cout<<head->val;
    }
};

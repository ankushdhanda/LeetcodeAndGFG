/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *cursor=head;
        for(int i=0;i<k;i++){
            if(cursor==NULL)return head;
            cursor=cursor->next;
        }
        ListNode *curr=head;
        ListNode *prev=NULL;
        ListNode *Next=NULL;
        for(int i=0;i<k;i++){
            Next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=Next;
        }
        head->next=reverseKGroup(curr,k);
        return prev;
    }
};

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *New = new ListNode();
        ListNode *curr = New;
        int sum=0,carry=0;
        while(l1 && l2){
            ListNode *temp=new ListNode();
            curr->next=temp;
            sum=l1->val +l2->val+carry;
            curr->next->val=(sum%10);
            carry=sum/10;
            l1=l1->next;
            l2=l2->next;
            curr=curr->next;
        }
        while(l1){
            ListNode *temp=new ListNode();
            curr->next=temp;
            sum=l1->val+carry;
            curr->next->val=(sum%10);
            carry=sum/10;
            l1=l1->next;
            
            curr=curr->next;
        }
        while(l2){
            ListNode *temp=new ListNode();
            curr->next=temp;
            sum=l2->val+carry;
            curr->next->val=(sum%10);
            carry=sum/10;
            
            l2=l2->next;
            curr=curr->next;
        }
        if(carry){
            ListNode *temp=new ListNode();
            curr->next=temp;
            curr->next->val=1;
            curr=curr->next;
        }
        return New->next;
        
    }
};

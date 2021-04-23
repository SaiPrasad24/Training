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
        int sum=0, carry=0;
        int val1=0, val2=0;
        ListNode* result = new ListNode();
        ListNode* curr = new ListNode();
        while(l1!=NULL || l2!=NULL){
            
            if(l1!=NULL)
                int val1=l1->val;
            else
                int val1=0;
            if(l2!=NULL)
                int val2=l2->val;
            else
                int val2=0;
            sum=carry+val1+val2;
            
            ListNode* temp = new ListNode(sum%10);
            
            curr->next=temp;
            carry=sum/10;
            
            if(l1!=NULL)
                l1=l1->next;
            if(l2!=NULL)
                l2=l2->next;
        }
        
        if(carry>0){
            ListNode* temp = new ListNode(carry);
                curr->next=temp;
        }

        return result->next;
    }
};

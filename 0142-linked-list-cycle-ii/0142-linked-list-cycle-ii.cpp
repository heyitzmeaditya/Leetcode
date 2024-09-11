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
    ListNode *detectCycle(ListNode *head) {
        ListNode *fast=head;
        ListNode *slow=head;
        while(fast&&fast->next){
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow){
                break;

            }
        }
        if(fast==NULL || fast->next==NULL){
            return 0;
        }
        slow=head;
        if(slow)
        
        while(slow!=fast){
            
            slow=slow->next;
            fast=fast->next;
        }
        return slow;;
        
    }
};
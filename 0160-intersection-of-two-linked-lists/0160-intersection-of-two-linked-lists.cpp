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
        ListNode *currA=headA,*currB=headB;
        int countA=0,countB=0;
        while(currA){
            countA++;
            currA=currA->next;
        }
        while(currB){
            countB++;
            currB=currB->next;
        }
        int count=abs(countA-countB);
        currA=headA,currB=headB;

        if(countA>countB){
            while(count--){
                currA=currA->next;
                 }
        }
        
        if(countB>countA){
            while(count--){
                currB=currB->next;
            }
        }
        while(currA!=currB){
            currA=currA->next;
            currB=currB->next;
        }
        return currA;

        
    }
};
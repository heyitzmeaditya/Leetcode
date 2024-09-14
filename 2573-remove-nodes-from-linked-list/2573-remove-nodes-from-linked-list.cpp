class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *previousNode = NULL;
        ListNode *currentNode = head;
        ListNode *nextNode = NULL;

        while (currentNode) {
            nextNode = currentNode->next;
            currentNode->next = previousNode;
            previousNode = currentNode;
            currentNode = nextNode;
        }
        return head = previousNode;
    }

    ListNode* removeNodes(ListNode* head) {
        head = reverseList(head);
        int maximumValue = head->val;
        ListNode *pointer = head;

        while (pointer->next != NULL) {
            if (pointer->next->val < pointer->val) {
                pointer->next = pointer->next->next;
            } else {
                pointer = pointer->next;
            }
        }
        
        head = reverseList(head);
        return head;
    }
};

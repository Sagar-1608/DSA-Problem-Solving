// 206. Reverse Linked List


class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        // Taking 3 nodes to store the nodes.
        ListNode* prev = NULL;

        // reversing the linked list
        // 1->2->3->4->5 to 5->4->4->3->2->1

        while(head != NULL){
            ListNode* next = head->next; // pointer to store the next node
            head->next = prev; // head's next is prev node
            prev = head; // prev node is nore head
            head = next; // head is now  next
        }
        return prev;
    }
};

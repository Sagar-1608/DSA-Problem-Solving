// 206. Reverse Linked List


class Solution {
public:
         void reverse(ListNode * & head, ListNode* curr ,ListNode* prev )
     {
         // base case 
         if(curr==NULL)
         { 
             head=prev;
             return ;
         }
          
          ListNode * forword = curr->next;

         reverse(head,forword,curr);
         curr->next=prev;


     }
    ListNode* reverseList(ListNode* head) {
        // Taking 3 nodes to store the nodes.
        //ListNode* prev = NULL;

        // reversing the linked list
        // 1->2->3->4->5 to 5->4->4->3->2->1

//         while(head != NULL){
//             ListNode* next = head->next; // pointer to store the next node
//             head->next = prev; // head's next is prev node
//             prev = head; // prev node is nore head
//             head = next; // head is now  next
//         }
//         return prev;
        
        //recursive
        
         ListNode * prev = NULL;
        ListNode* curr= head;
        reverse(head,curr,prev);
        return head;
    }
};

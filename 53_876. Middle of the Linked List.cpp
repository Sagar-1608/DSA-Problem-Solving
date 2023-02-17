// 876. Middle of the Linked List


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
    ListNode* middleNode(ListNode* head) {
       

         ListNode *middel ,*end;
         middel=end=head;
        //  when end tarvael two time that time middel complete 1 node
         while(end && end->next){
             end=end->next->next;
             middel=middel->next;
         }

         return middel;

     
        
        
    }
};

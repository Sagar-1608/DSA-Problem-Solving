//Add Two Numbers

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
     
    
      
        ListNode* ans=new ListNode();
        ListNode* temp= ans;
        
        int r=0;
        
        while (l1 !=NULL && l2 != NULL)
        {
            int p=0;
            p =l1->val + l2->val +r;
            r= p/10;
            
            
            l1=l1->next;
            l2=l2->next;
              temp->next = new ListNode(p%10);
            
            
            
            temp = temp->next;
        }
        
        
        
            while (l1 !=NULL )
        {
           
           int p=0;
            p =l1->val +r;
            r= p/10;
            
            l1=l1->next;
           temp->next = new ListNode(p%10);
            
           
            temp=temp->next;
        }
       
            while (l2 !=NULL )
        {
           
           int p=0;
            p =l2->val +r;
            r= p/10;
            
            l2=l2->next;
           temp->next = new ListNode(p%10);
            
            
            
            temp = temp->next;
        }
        
            
            
            if(r!=0)
            {
                 temp->next = new ListNode(r);
            temp = temp->next;
            }
        
    
//         while(r!=0)
//         {
//             int p= 0;
//             p=r;
//             r=p/10;
//             temp->next = new ListNode(p%10);
            
            
            
//             temp = temp->next;
            
//         }
       
        
        return ans->next;
        
    }
};

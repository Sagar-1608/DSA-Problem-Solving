//Add Two Numbers

/*
*
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
/*class Solution {
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
*/

updated code is here

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
   int getlen(ListNode *head)
   { 
       long c=0;
       while(head)
       {
           c++;
           head=head->next;
       }
       return c;
   }
   ListNode * add(ListNode* &l1, ListNode* l2 )
   {   
       ListNode * ans =new ListNode(-1);
       ans->next=l1;
       ListNode *prev=NULL;

      int carry =0;
       while(l1 || l2 )
       {
        prev=l1;
         int val1=0;
         int val2=0;

         if(l1!=NULL) val1=l1->val;
         if(l2!=NULL) val2=l2->val;


         int sum =carry + val1 + val2;
         int digit = sum%10;
         l1->val=digit;
         carry =sum/10;

         if(l1!=NULL) l1=l1->next;
         if(l2!=NULL) l2=l2->next;
       }

       if(carry>0)
       {
           ListNode * carr=new ListNode(carry);
           prev->next=carr;

       }
       return ans->next;
   }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
     
        int len1 = getlen(l1);
        int len2 = getlen(l2);
        ListNode* ans;

        if(len1>len2)
        {
              ans= add(l1,l2 );
        }
        else
        {
             ans= add(l2,l1 );

        }
        return ans;

        
        
    }
};

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::detectCycle(ListNode* A)
{

    if(A==NULL)
    return NULL;


 ListNode *P = A;
 ListNode *Q=  A;

 while(Q!=NULL && Q->next !=NULL)
 {
     P=P->next;
     Q=Q->next->next;
     if(Q==P)
     {
         while(A!=P)
         {
             A=A->next;
             P=P->next;
         }
         return P;
     }
 }

 return NULL;
  }

    // Do not write main() function.


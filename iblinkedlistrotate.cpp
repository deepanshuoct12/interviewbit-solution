/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::rotateRight(ListNode* A, int B) {
    ListNode* last=A,*curr=A;
    int len=1;
    if(A==NULL)
    return NULL;
    while(last!=NULL && last->next!=NULL)
   {
       last=last->next;
       len++;
   }
    if(last!=NULL)
    last->next=A;

    ListNode* newhead;
    int pos=1;
    B=B%len;
    while(curr!=NULL)
    {
        if(pos==len-B)
        {
            newhead=curr->next;
            curr->next=NULL;
            break;
        }
        pos++;
        curr=curr->next;
    }
    return newhead;
}


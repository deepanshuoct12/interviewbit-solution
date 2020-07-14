/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 ListNode* reverseList(ListNode* A) {
    if(A==NULL)
        return A;

    ListNode *p=NULL;
    ListNode *q=A;
    ListNode *r=A;
    while(q!=NULL) {
        r=q->next;
        q->next=p;
        p=q;
        q=r;
    }
    A=p;
    return A;
}

ListNode* Solution::reverseBetween(ListNode* A, int B, int C) {
      if(A==NULL)
      return NULL;

      ListNode *curr=A,*p1=A,*l1=NULL,*p2=A,*l2=NULL,*p3=NULL,*l3=NULL;
      int pos=1;
      int m=B-1;
    //   if(m==0)
    //   m=1;

      while(curr!=NULL){
          if(pos==m)
          {
              l1=curr;
              p2=l1->next;
              l3=curr;
              curr=curr->next;
              l1->next=NULL;
          }
          else if(pos==C){
            //  cout<<pos<<":::"<<"\n";
              l2=curr;
              p3=l2->next;
              l3=curr;
              curr=curr->next;
              l2->next=NULL;
          }
         else{
             l3=curr;
             if(curr!=NULL)
             curr=curr->next;
         }
          pos++;
      }

    //   curr=p1;
    //   while(curr!=NULL)
    //   {
    //       cout<<curr->val<<" ";
    //       curr=curr->next;
    //   }
    //   cout<<"\n";

    //   curr=p2;
    //   while(curr!=NULL)
    //   {
    //       cout<<curr->val<<": ";
    //       curr=curr->next;
    //   }
    //   cout<<"\n";

    //   curr=p3;
    //   while(curr!=NULL)
    //   {
    //       cout<<curr->val<<" ";
    //       curr=curr->next;
    //   }
    //   cout<<"\n";

      p2=reverseList(p2);
      if(l1!=NULL)
      l1->next=p2;

      l2=p2;
      while(l2->next!=NULL)
      l2=l2->next;

      if(l3!=NULL)
      l2->next=p3;

      if(l1==NULL)
        return p2;

      return p1;
}


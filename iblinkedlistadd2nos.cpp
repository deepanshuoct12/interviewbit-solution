 ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B)
{
ListNode *a,*b,*C=NULL,*temp=NULL,*prev=NULL;
a=A;
b=B;
int c=0,sum,sumc;
while(a&&b)
{
sum=a->val+b->val+c;
if(sum>9)
{
c=1;
}
else
{
c=0;
}
sum=sum%10;
temp=new ListNode(sum);
if(C==NULL)
{
C=temp;
}
else
{
prev->next=temp;
}
prev=temp;
a=a->next;
b=b->next;
}


while(a)
{
sum=a->val+c;
if(sum>9)
{
c=1;
}
else
{
c=0;
}
sum=sum%10;
temp=new ListNode(sum);
if(C==NULL)
{
C=temp;
}
else
{
prev->next=temp;
}
prev=temp;
a=a->next;
}


while(b)
{
sum=b->val+c;
if(sum>9)
{
c=1;
}
else
{
c=0;
}
sum=sum%10;
temp=new ListNode(sum);
if(C==NULL)
{
C=temp;
}
else
{
prev->next=temp;
}
prev=temp;
b=b->next;
}


if(c==1)
{
temp=new ListNode(c);
prev->next=temp;
temp=NULL;
}
return C;
}
//  ListNode* reverselist(ListNode* head){

//      if(head==NULL)
//      return NULL;
//      ListNode*p=NULL,*q=head,*r=head;
//      while(q!=NULL){
//          r=q->next;
//          q->next=p;
//          p=q;
//          q=r;
//      }
//      head=p;
//      return head;

//  }
// ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B)
// {
//     ListNode* reva=A;//reverselist(A);
//     ListNode* revb=B;//reverselist(B);
//     ListNode* newlist=NULL;
//     int carry=0;
//     ListNode* newhead;
//     while(reva!=NULL && revb!=NULL)
//     {
//         int data = (reva->val+revb->val+carry);
//          int carry=(data)/10;
//          ListNode* node = new ListNode(data%10);
//         if(newlist==NULL)
//         {   newhead=node;
//             newlist=node;
//         }
//         else
//         {
//             newlist->next=node;
//             newlist=newlist->next;
//         }

//         reva=reva->next;
//         revb=revb->next;
//     }
//     while(reva!=NULL)//  || carry!=0)
//     {  // int x;
//         // if(reva==NULL)
//         // x=0;
//         // else
//       //  x=reva->val;
//          int data = (reva->val+carry);
//           carry=(data)/10;
//          ListNode* node = new ListNode(data%10);
//         if(newlist==NULL)
//         {  // newhead=node;
//             newlist=node;
//         }
//         else
//          newlist->next=node;

//          newlist=node;
//      //    if(reva!=NULL)
//          reva=reva->next;
//     }
//       while(revb!=NULL)// || carry!=0)
//     {
//         // int x;
//         // if(revb==NULL)
//         // x=0;
//         // else
//         //  x=revb->val;

//           int data = (revb->val+carry);
//           carry=(data)/10;
//          ListNode* node = new ListNode(data%10);
//         if(newlist==NULL)
//       {  // newhead=node;
//             newlist=node;
//         }
//         else
//          newlist->next=node;

//          newlist=node;

//       //   if(revb!=NULL)
//          revb=revb->next;
//     }

//  //   newlist->next=NULL;
//   //  ListNode* ans=reverselist(newhead);

//     return newhead;

// }


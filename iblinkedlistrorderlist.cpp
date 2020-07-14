/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
//  ListNode* Solution::reorderList(ListNode* a) {

//     if(a == NULL) return a;

//     ListNode* ptr1 = a, *ptr2 = a;

//     // find mid
//     while(ptr2->next != NULL && ptr2->next->next != NULL) {
//         ptr1 = ptr1->next;
//         ptr2 = ptr2->next->next;
//     }

//     //reverse linked list after mid
//     ptr1=ptr1->next; ptr2=NULL;
//     while(ptr1 != NULL) {
//       ListNode* temp = ptr1->next;
//       ptr1->next = ptr2;
//       ptr2 = ptr1;
//       ptr1 = temp;
//     }

//     //reorder list
//     ptr1=a;
//     while(ptr2!=NULL) {
//         ListNode* temp1 = ptr1->next, *temp2 = ptr2->next;
//         ptr1->next = ptr2;
//         ptr2->next = temp1;
//         ptr1=temp1;
//         ptr2=temp2;
//     }

//     if(ptr1!=NULL)ptr1->next = NULL;

//     return a;
// }


ListNode* Solution::reorderList(ListNode* A) {
    if(A==NULL)
    {  // ListNode *curr=ptr;
    //    while(ptr!=NULL)
    //    cout<<ptr->val<<" ";
      return A;

  }
     ListNode *first=A;
    // if(f==0)
    // {
    //     ptr=A;
    //     f=1;
    // }
    ListNode *last=A;
    while(last!=NULL && last->next!=NULL && last->next->next!=NULL)
        last=last->next;

    ListNode *temp=last->next;
    last->next=NULL;
    if(temp!=NULL)
    temp->next=first->next;
    first->next=temp;

    if(first->next!=NULL)
    first->next->next=reorderList(first->next->next);

    return A;
}


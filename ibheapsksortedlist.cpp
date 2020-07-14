/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeKLists(vector<ListNode*> &A) {
    priority_queue<int,vector<int>,greater<int> > pq;
    for(int i=0;i<A.size();i++)
    {
        ListNode *curr = A[i];

        while(curr!=NULL)
        {
           pq.push(curr->val);
           curr=curr->next;
        }
    }
    if(pq.empty())
    return NULL;
    ListNode *head=NULL,*last=NULL;
    while(!pq.empty())
    {
        ListNode *temp = new ListNode(pq.top());
        pq.pop();
        if(head==NULL)
        {
            head=temp;
            last=temp;
        }
        else
        last->next=temp;

        last=temp;
    }
    last->next=NULL;

    return head;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}


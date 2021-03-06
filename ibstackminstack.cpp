stack<pair<int,int>>s;
MinStack::MinStack() {
   stack<pair<int,int>>temp;
   s=temp;

}
void MinStack::push(int x) {
   if(s.empty())
   {
       s.push({x,x});
   }
   else
   {
        if(x<s.top().second)
        {
            s.push({x,x});
        }
        else
            s.push({x,s.top().second});
   }
}
void MinStack::pop() {
    if(!s.empty())
    {
        s.pop();
    }

}

int MinStack::top() {
    if(s.empty())
        return -1;
    else
        return s.top().first;
}

int MinStack::getMin() {
    if(!s.empty())
        return s.top().second;
    else
        return -1;
}

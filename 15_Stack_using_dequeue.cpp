//  Stack Using Deque (code studio)

// https://youtu.be/-e1RhozzC3M
// see video and code to understand

#include <bits/stdc++.h> 

class Stack
{
     int sze;
    deque<int> d;
public:
    // Initialize your data structure.
    Stack()
    {
        sze =0;
    }

    // Pushes 'X' into the stack. Returns true if it gets pushed into the stack, and false otherwise.
    bool push(int x)
    {
        // Write your code here.
     
        d.push_back(x);
        sze++;
        return true;
    }

    // Pops top element from Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
    int pop()
    {
        // Write your code here.
        if(isEmpty()){
            return -1;
        }
        int element = d.back();
        d.pop_back();
        sze--;
        return element;
    }

    // Returns the topmost element of the stack. In case the stack is empty, it returns -1.
    int top()
    {
        // Write your code here.
        if(isEmpty()){
            return -1;
        }
        return d.back();
    }

    // Returns true if the stack is empty, otherwise false.
    bool isEmpty()
    {
        // Write your code here.
        if(sze==0){
            return true;
        }
        return false;
    }

    // Returns the number of elements currently present in the stack.
    int size()
    {
        // Write your code here.
        return sze;
    }
};

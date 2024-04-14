Implement a circular  Queue using array and operation enqueue,dequeue,isfull,isempty in C++ (Explain in copy also) 

// here we use logic of cwh in c and convert it into c++
// https://www.youtube.com/watch?v=KqTJ5MAUj80&list=PLu0W_9lII9ahIappRPN0MCAgtOu3lQjQi&index=42&pp=iAQB
// https://www.youtube.com/watch?v=rtxjrVpWVmI&list=PLu0W_9lII9ahIappRPN0MCAgtOu3lQjQi&index=43&pp=iAQB
// https://www.youtube.com/watch?v=lQBRjdPFF4w&list=PLu0W_9lII9ahIappRPN0MCAgtOu3lQjQi&index=44&pp=iAQB
// see video to understand you can see copy also

#include <bits/stdc++.h>
#include <iostream>
#include <queue>
using namespace std;

class CircularQueue
{
    int *arr;
    int f;
    int r;
    int size;

public:
    // Initialize your data structure.
    CircularQueue(int n)
    {
        size = n;
        arr = new int[size];
        f = r = -1;
    }

    void enqueue(int value)
    {
        // to check whther queue is full
        if ((r + 1) % size == f)
        {
            cout << "Queue is full" << endl;
        }

        else
        {
            r = (r + 1) % size;
            arr[r] = value;
            cout << "enqued element " << value << endl;
        }
    }

    int dequeue()
    {
        int ans;
        if (r == f)
        { // to check queue is empty
            cout << "Queue is Empty " << endl;
        }

        else
        {
            f = (f + 1) % size;
            ans = arr[f];
        }
        return ans;
    }
    void queueDisplay()
    {
        int i;
        if (f == r)
        {
            cout << "Queue is Empty" << endl;
            return;
        }

        // traverse front to rear and print elements
        for (i = f + 1; i <= r; i++)
        {

            cout << arr[i] << " " << endl;
        }
        return;
    }
};
int main()
{
    // create a queue
    CircularQueue q(4);
    q.enqueue(10);
    q.enqueue(11);
    q.enqueue(12);
    q.enqueue(13);
    // print Queue elements
    q.queueDisplay();
    cout << "Dequed elemet " << q.dequeue() << endl;
    cout << "Dequed elemet " << q.dequeue() << endl;
    // print Queue elements
    q.queueDisplay();
    return 0;
}

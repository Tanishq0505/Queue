// Queue using array in c++ 
// here we use logic of cwh and write code in c++
// https://www.youtube.com/watch?v=EyxBMLZdgvc&list=PLu0W_9lII9ahIappRPN0MCAgtOu3lQjQi&index=39&pp=iAQB
// https://www.youtube.com/watch?v=JlZX7xIBjl0&list=PLu0W_9lII9ahIappRPN0MCAgtOu3lQjQi&index=40&pp=iAQB
// https://www.youtube.com/watch?v=FuQdtKry3ss&list=PLu0W_9lII9ahIappRPN0MCAgtOu3lQjQi&index=41&pp=iAQB
// see all video and you can see copy also

#include <iostream>
#include <queue>
using namespace std;


class Queue
{

    int *arr;
    int qfront;
    int rear;
    int size;

public:
    Queue()
    {
        size = 5;
        arr = new int[size];
        qfront = -1;
        rear = -1;
    }

    /*----------------- Public Functions of Queue -----------------*/

    void enqueue(int data)
    {
        if (rear == size - 1)
            cout << "Queue is Full" << endl;
        else
        {
            rear++;
            arr[rear] = data;
            cout << "Enqued element:" << data << endl;
        }
    }

    int dequeue()
    {
        if (qfront == rear)
        {
            cout << "This Queue is empty" << endl;
            // return -1;
        }
        else
        {
            qfront++;
            int ans = arr[qfront];
            arr[qfront] = -1;

            return ans;
        }
    }

    int isEmpty()
    {
        if (qfront == rear)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int front()
    {
        if (qfront == rear)
        {
            return -1;
        }
        else
        {
            return arr[qfront + 1];
        }
    }
    void queueDisplay()
    {
        int i;
        if (qfront == rear)
        {
            cout << "Queue is Empty" << endl;
            return;
        }

        // traverse front to rear and print elements
        for (i = qfront + 1; i <= rear; i++)
        {

            cout << arr[i] << " " << endl;
        }
        return;
    }
};
int main()
{
    // create a queue
    Queue q;
    q.enqueue(10);
    q.enqueue(11);
    q.enqueue(12);
    q.enqueue(13);
    cout << "return 0 if list not empty " << q.isEmpty() << endl;
    cout << "front element is " << q.front() << endl;
    // print Queue elements
    q.queueDisplay();

    cout << "Dequed element " << q.dequeue() << endl;
    q.queueDisplay();
    return 0;
}

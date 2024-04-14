Deque  using stl 

#include <bits/stdc++.h>
#include <iostream>
#include <queue>
using namespace std;
// https://youtu.be/W7uB9-TKfTg?list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA
// see from 52 min 49 sec  lec 60
int main()
{
    deque<int> d;
    d.push_front(12);
    d.push_front(14);
    cout << "front is " << d.front() << endl;
    cout << "back is" << d.back() << endl;
    d.pop_front();
    cout << "front is " << d.front() << endl;
    cout << "back is" << d.back() << endl;
    d.pop_back();
    if (d.empty())
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "Queue is not empty" << endl;
    }
}

//  225. Implement Stack using Queues Leet code

// Both approach using single and double queue present in video
// https://youtu.be/jDZQKzEtbYQ
// see video to understand

    // Single queue approach
class MyStack {

	queue<int> q; //declare the deque in private scope
public:
   MyStack() {   
    }
	void push(int x) {
		q.push(x); //push into the queue and then 
                   //according to the size of the queue, reverse it
		for(int i=0;i<q.size()-1;++i){
			q.push(q.front());
			q.pop();
		}
	}

	  int pop() {
        int ans=q.front();
        q.pop();
        return ans;
        
    }
	int top() {
		return q.front();  //return the front element. that would correspond to the stack.top()
	}

	bool empty() {
		return q.empty(); // check if the queue is empty.
	}
};


// Two queue approch 

class MyStack {
public:
// https://youtu.be/jDZQKzEtbYQ
// see video to understand 
    queue<int> q1; //declare your queues in private scope
    queue<int> q2;

    MyStack() {   
    }
    
    void push(int x) {

        q2.push(x);
        while(!q1.empty()){
            q2.push(q1.front()); 
            q1.pop();
        }
        swap(q1, q2);
    }
    
    int pop() {
        int res = top();
        q1.pop();
        return res;
    }

    int top() {
        return q1.front();
    }
    
    bool empty() {
        return q1.empty();
    }
};

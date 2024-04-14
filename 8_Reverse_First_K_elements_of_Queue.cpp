// Reverse First K elements of Queue (GFG) 

// https://youtu.be/_gJ3to4RyeQ?list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA 
// lec 61 see from 22 min Q3 

queue<int> modifyQueue(queue<int> q, int k) {
    //algo:
    //first k element stack me daaldo  and queue se hatado
    // k element stack se nikalke wapas queue me daalde 
    // fer queue k (n-k) starting k elements, wapas queue me daalde
    
    stack<int> s;
    
    for(int i = 0; i<k; i++) {
        int val = q.front();
        q.pop();
        s.push(val);
    }
    
    while(!s.empty()) {
        int val = s.top();
        s.pop();
        q.push(val);
    }
    
    int t = q.size()-k;
    
    while(t--) {
        int val = q.front();
        q.pop();
        q.push(val);
    }
    
    return q;
}

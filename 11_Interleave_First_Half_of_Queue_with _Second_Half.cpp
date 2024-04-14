// Interleave the first half of the queue with second half (GFG) 

// https://youtu.be/_gJ3to4RyeQ?list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA 
// lec 61 Q6 see from 1 hour 12 min 

class Solution{
public:

    vector<int> rearrangeQueue(queue<int> &q){
         int n=q.size();
       queue<int> q1;
       for(int i=0;i<n/2;i++){
           q1.push(q.front());
           q.pop();
           
       }
       
       while(!q1.empty()){
           q.push(q1.front());
           q1.pop();
           int temp=q.front();
           q.pop();
           q.push(temp);
       }
      // cout<<q.size()<<endl;
       vector<int> v;
       while(!q.empty()){
           v.push_back(q.front());
           q.pop();
       }
       return v;
    }
};

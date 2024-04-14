// Queue Reversal (GFG) 

    // https://youtu.be/_gJ3to4RyeQ?list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA\
// see lec 61 from starting Q1
// do dry run to understand 
class Solution
{
    public:

    void reverse(queue<int>&q){
    
        if(q.empty()){
           return; 
        }
        int temp = q.front();
        q.pop();
        
        reverse(q);
        q.push(temp);
    }
    
    queue<int> rev(queue<int> q)
    {
        reverse(q);
        return q;
    }
};

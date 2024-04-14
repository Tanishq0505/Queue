// Circular tour  (GFG) 
// 134. Gas Station(Leet code) 
// https://youtu.be/_gJ3to4RyeQ?list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA 
// see lec 61 Q5 from 41 min 

class Solution {
public:
// https://youtu.be/_gJ3to4RyeQ?list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA
// see lec 61 Q5 from 41 min 
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
       int deficit = 0;
       int balance = 0;
       int start = 0;
         int n=gas.size(); 
       for(int i=0; i<n; i++) {
           balance += gas[i] - cost[i];
           if(balance < 0) {
               start = i+1;
               deficit += balance;
               balance = 0;
           }
       }
       
       if(balance + deficit >=0) 
            return start;
        return -1;  
    }
};

// )Game with String (GFG)
// https://youtu.be/n5XaFXQjlIY
// see video to understand

class Solution{
public:

   int minValue(string s1, int k){
        // code here
        int s=s1.length();
       
        unordered_map<char, int> m; 
      
        priority_queue<int> q;
        int ans=0;
        for(int i=0; i<s; i++){
            m[s1[i]]++;
        }
        for(auto i:m){
            q.push(i.second);
        }
        while(k>0){
            int x=q.top();
            x=x-1;
            q.pop();
            q.push(x);
            k--;
        }
        while(!q.empty()){
              int x=q.top();
              x=x*x;
              ans=ans+x;
              q.pop();
              
        }
        return ans;
    }
};

Check if all levels of two trees are anagrams or not (GFG) 

// https://youtu.be/DWtcYY60isc 
    // see video to understand 

class Solution{
    public:
    
    bool areAnagrams(Node *root1, Node *root2)
    {
         // Base Cases
        if (root1 == NULL && root2 == NULL)
            return true;
        if (root1 == NULL || root2 == NULL)
            return false;
            
            
        queue<Node*>q1,q2;
        
        // push the root node
        q1.push(root1);
        q2.push(root2);
        
        while(q1.size()>0 && q2.size()>0)
        {
            // size represent the size of current level
            int n1=q1.size();
            int n2=q2.size();
            
            if(n1!=n2)
               return false;
            
            vector<int>v1,v2;
            // level order q1
            while(n1>0)
            {
                Node * front1=q1.front();
                q1.pop();
    
                v1.push_back(front1->data);
    
                // push the children
                if(front1->left!=NULL)
                    q1.push(front1->left);
                if(front1->right!=NULL)
                    q1.push(front1->right);
                n1--;
            }
            while(n2>0)
            {
                Node * front2=q2.front();
                q2.pop();
                
                v2.push_back(front2->data);
                // push the children 
                if(front2->left!=NULL)
                    q2.push(front2->left);
                if(front2->right!=NULL)
                    q2.push(front2->right);
                n2--;
            }
            sort(v1.begin(),v1.end());
            sort(v2.begin(),v2.end());
            if(v1!=v2)
               return false;
            
        }
        if(q1.empty() && q2.empty())
             return true;
        return false;
    }
};

Sum of minimum and maximum elements of all subarrays of size k.  (code studio) 
// https://youtu.be/_gJ3to4RyeQ 
// see lec 61 Q8 from 2 hour 2 min 

  #include <bits/stdc++.h> 

long long sumOfMaxAndMin(vector<int> &nums, int n, int k) {

    // Write your code here.
    deque<int> maxi(k);
    deque<int> mini(k);
    // Addition of first k size window

    for (int i=0; i<k; i++){
        while(!maxi.empty() && nums[maxi.back()] <= nums[i]){
            maxi.pop_back();
        }
        while(!mini.empty() && nums[mini.back()] >= nums[i]){
            mini.pop_back();
        }
        maxi.push_back(i);
        mini.push_back(i);
    }
    long long ans=0;
ans += nums[maxi.front()] + nums[mini.front()];
    // Remaining windows ko process karlo
    for(int i=k; i<n; i++){
        // removal
        if(!maxi.empty() && i-maxi.front() >= k){
            maxi.pop_front();
        }
        if(!mini.empty() && i-mini.front() >= k){
            mini.pop_front();
        }
        // addition
        while(!maxi.empty() && nums[maxi.back()] <= nums[i]){
            maxi.pop_back();
        }
        while(!mini.empty() && nums[mini.back()] >= nums[i]){
            mini.pop_back();
        }
        maxi.push_back(i);
        mini.push_back(i);
        ans += nums[maxi.front()] + nums[mini.front()];
    }
    return ans;
}


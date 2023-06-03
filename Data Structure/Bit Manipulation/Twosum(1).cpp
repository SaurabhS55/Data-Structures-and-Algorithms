#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            map<int,int> q;
            for(int i=0;i<nums.size();i++){
                int c=target-nums[i];
                if(q.find(c)!=q.end()){
                    return {i,q.find(c)->second};
                }
                q[nums[i]]=i;
            }
        return {0,0}; 
    }
};
    

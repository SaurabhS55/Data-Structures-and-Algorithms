#include <bits/stdc++.h>
class Solution {
public:
    bool isPalindrome(int x) {
        int n=x,ans=0;
        if(x==0){
            return true;
        }
        if(x<0 || x%10==0){
            return false;
        }
        while(n>ans){
            int r=n%10;
            ans=ans*10+r;
            n=n/10;
        }
        if(n==ans || n==ans/10)
            return true;
        else
            return false;
    }
};
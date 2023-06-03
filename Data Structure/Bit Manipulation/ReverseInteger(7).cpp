#include <bits/stdc++.h>
class Solution {
public:
    int reverse(int x) {
            long r,rev=0;
            while(x!=0){
                r=x%10;
                rev=rev*10+r;
                if(rev>INT_MAX||rev==INT_MAX){
                    return 0;
                }
                if(rev<INT_MIN||rev==INT_MIN){
                    return 0;
                }
                x=x/10;
            }
            return rev;
        // return 0;
    }
};
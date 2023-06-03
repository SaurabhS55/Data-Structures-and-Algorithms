class Solution {
public:
    unsigned int reverseBits(unsigned int n) {
        unsigned int ans=0,b,r,i=1;
        while(n!=0){
            b=n&1;
            r=b<<(32-i);
            ans=r|ans;
            i++;
            n=n>>1;
        }
        return ans;
    }
};
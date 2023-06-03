class Solution {
public:
    int subtractProductAndSum(int n) {
        

        int s=0,m=1,r;
        while(n!=0){
            r=n%10;
            s+=r;
            m*=r;
            n=n/10;
        }
        return m-s;
  

    }
};
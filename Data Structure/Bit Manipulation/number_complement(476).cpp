class Solution {
public:
    int findComplement(int num) {
        int mask=0,m=num;
        if(num==0){
            return 1;
        }
        while(num!=0){
            mask=(mask<<1)|1;
            num=num/2;
        }
        return ~m&mask;
        
    }
};
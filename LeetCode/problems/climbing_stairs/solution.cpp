class Solution {
public:
    int climbStairs(int n) {
        if(n<4) return n;
        int a,b,t,sum;
        a=1,b=2,t=2;
        while(t<n){
            sum = a+b;
            a=b;
            b=sum;
            t++;
        }
        return sum;
    }
};
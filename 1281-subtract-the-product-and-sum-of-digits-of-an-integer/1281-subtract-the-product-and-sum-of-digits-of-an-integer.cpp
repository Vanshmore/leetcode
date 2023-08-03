class Solution {
public:
    int subtractProductAndSum(int n) {
        int d=0,m=1,s=0;
        while(n!=0){
          d = n % 10;
          m = m * d;
          s = s + d;
          n=n/10;
     }
    return m-s;

        
    }
};
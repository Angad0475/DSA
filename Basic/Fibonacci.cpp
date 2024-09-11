class Solution {
public:
    int fib(int n) {
        int a=0; 
        int b=1;
        int res=0;

        if(n==1|| n==0){
            return n;
        }
        for(int i=2;i<=n;i++){
            res=a+b;
            a=b;
            b=res;
        }
        return res;

    }
};

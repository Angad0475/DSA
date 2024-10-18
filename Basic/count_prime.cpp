class Solution {
public:
    int countPrimes(int n) {
        int count=0;
        vector<bool>prime(n+1,true); //initializing boolean vector having all the numbers prime.

         prime[0]=prime[1]=false; //the first element and second elemnt is not prime .

        for(int i=2;i<n;i++){
            if(prime[i]){ //if the element is prime  increase the count .
                count++;

                for(int j= 2*i;j<n;j+=i){ //then allthemultiples to non-prime.
                    prime[j]=false;
                }
            }
        }
        return count;
    }
};

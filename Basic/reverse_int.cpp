class Solution {
public:
    int reverse(int x) {
        int num= x;
        long rev=0;

        while(num!=0){
            int rem = num%10;
            rev= rev*10+rem;
            num= num/10;
        }
        if(rev > INT_MAX|| rev <INT_MIN){  //to check whether r is in range .
            return 0;
        }
        return int(rev); // return the reversed number in int data type becauuse the functkon is in int data type.
    }
};

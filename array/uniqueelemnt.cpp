class Solution{
public:	
	int search(int A[], int N){
	int res = A[0];
    for (int i = 1; i < N; i++){
        res = res ^ A[i]; // res= 2^3^2^3^4^5^4
                         // res= (2^2)^(3^3)^(4^4)^5
                          // res= 0 ^ 0 ^ 0 ^ 5
    }                      // res= 5     

    return res;// here we return the res containg the value.
}
};
//in this we use xor properties represented by "^" and the peroperties are  
//XOR of a number with itself is 0. for ex (1^1)=0
//XOR of a number with 0 is number itself. fro ex (1^0)=1


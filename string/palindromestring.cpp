class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    int n= S.size();
	    int i=0;
	    int j=n-1;
	    
	    while(i<=j){
	        if(S[i]!=S[j]){
	            
	            return 0;
	        }
	        else{
	            i++;
	            j--;
	        }
	    }
	    return 1;
	}

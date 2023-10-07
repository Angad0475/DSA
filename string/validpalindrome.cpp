class Solution{
public:	
	
	    bool isPalindrone(string s){
    int i=0;
    int j=s.length()-1;
    
    while(i<=j){
        if(s[i]==s[j]){
            i++;
            j--;
            
        }
        else{
            return false;
        }
    }
    return true;
}
    
	bool sentencePalindrome(string s) 
	{
	    string temp="";
        for(int i=0;i<s.length();i++){
            if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z'){
                temp.push_back(s[i]);
            }
        }
        
        return isPalindrone(temp);
    }
	
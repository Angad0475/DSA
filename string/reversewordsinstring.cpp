class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        string str="";
        vector<string> v;
        S.push_back('.');
    
        for(int i=0;i<S.size();i++)
        {
            if(S[i]!='.'){
            str=str+S[i];
            
        }
            if(S[i]=='.')
            {
                v.push_back(str);
                str="";
            }
        }
        
       
        reverse(v.begin(),v.end());
        string s="";
        for(int i=0;i<v.size();i++)
        {
            s=s+v[i];
            s.push_back('.');
            
        }
        s.pop_back();
        
        
        return s;
    } 
    
class Solution
{
  public:
    string modify (string s)
    {
        int n=s.length();
        string ans="";
        for(int i=0;i<n;i++){
            if(s[i]==' '){
                continue;
            }
            else{
                ans=ans+s[i];
            }
        }
        return ans;
    }
};
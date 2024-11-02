class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start=0;
        int maxlength=0;
        int end=0;

        unordered_set<char>charSet;
        while(end<s.length()){
            if(charSet.find(s[end])==NULL){
                charSet.insert(s[end]);
                end++;
                maxlength=max(maxlength,end-start);
            }
            else{
               charSet.erase(s[start]);
               start++;
            }
        }
        return maxlength;
    }
};

class Solution {
public:
    string reverseVowels(string s) {
        unordered_set<char>set={'a','e','i','o','u','A','E','I','O','U'};
        int i=0;
        int j=s.size()-1;

        while(i<j){
            while(i<j && set.find(s[i])==set.end()){
                i++;
            }
            while(i<j && set.find(s[j])==set.end()){
                j--;
            }
            if(i<j){
                swap(s[i],s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};

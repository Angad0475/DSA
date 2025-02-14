class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.length()!=word2.length()){
            return false;
        }
        unordered_set<char> set1(word1.begin(),word1.end());
        unordered_set<char> set2(word2.begin(),word2.end());

        if(set1!=set2){
            return false;
        }

        unordered_map<char,int>freq1;
        unordered_map<char,int> freq2;

        for(char ch : word1){
            freq1[ch]++;
        }
        for( char ch : word2){
            freq2[ch]++;
        }
        vector<int>freqList1,freqList2;

        for(auto& var : freq1){
            freqList1.push_back(var.second);
        } 
        for(auto& var : freq2){
            freqList2.push_back(var.second);
        }
        sort(freqList1.begin(),freqList1.end());
        sort(freqList2.begin(),freqList2.end());

        return freqList1 == freqList2;

    }
};

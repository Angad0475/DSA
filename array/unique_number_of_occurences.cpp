class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>freq;
        unordered_set<int>unique;
        for(int num: arr){
            freq[num]++;
        }
        for(auto entry:freq){
            unique.insert(entry.second);
        }
        return unique.size()== freq.size(); //set contain unique numbers so it should be equql to the size of set and if is it then return true.
    }
};

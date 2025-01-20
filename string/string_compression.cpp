class Solution {
public:
    int compress(vector<char>& chars) {
        vector<char>compressed;

        int i=0;

        while(i<chars.size()){
            char currentChar=chars[i];
            int count=0;

            while(i<chars.size() && currentChar==chars[i]){
                i++;
                count++;
            }
            compressed.push_back(currentChar);

            if(count>1){
                for(char c: to_string(count)){
                    compressed.push_back(c);
                }
            }
        }
        for (int j = 0; j < compressed.size(); j++) {
            chars[j] = compressed[j];   // as mentioned in questions.
        }
        return compressed.size();
    }
};

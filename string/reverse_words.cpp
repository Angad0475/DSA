class Solution {
public:
    string reverseWords(string s) {
        string result = "", word = "";
    
    // Traverse the string character by character
    for (char c : s) {
        if (c != ' ') {
            // Build the current word
            word += c;
        } else if (!word.empty()) {
            // If space is encountered, add the word to the result
            if (!result.empty()) {
                result = " " + result; // Add a space before the result
            }
            result = word + result;
            word = ""; // Reset the word
        }
    }
    
    // Add the last word if it exists
     if(!word.empty()){
        if(!result.empty()){
            result=" "+result;
        }
        result=word+result;
     }
    
    return result;
    }
};

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (char ch : s) {
            if (ch == '{' || ch == '(' || ch == '[') {
                st.push(ch); //traverse the string and if found openening brackets push it  into stack and compare it with closing tags in sring with the element in stack(opening tags).
            } else {
                if (st.empty()) {
                    return false;  // Unmatched closing bracket
                }

                char top = st.top();
                st.pop();

                if ((ch == ')' && top != '(') || 
                    (ch == '}' && top != '{') || 
                    (ch == ']' && top != '[')) {
                    return false;  // Mismatched bracket
                }
            }
        }

        return st.empty(); 
    }
};

#include <string>
#include <stack>
#include <map>

class Solution {
public:
    bool isValid(std::string s) {
        std::stack<char> st;
        std::map<char, char> matching_brackets = {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };

        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                // If it's an opening bracket, push it onto the stack
                st.push(c);
            } else if (c == ')' || c == '}' || c == ']') {
                // If it's a closing bracket
                if (st.empty()) {
                    // No corresponding opening bracket
                    return false;
                }
                // Check if the top of the stack matches the expected opening bracket
                if (st.top() != matching_brackets[c]) {
                    return false;
                }
                // If they match, pop the opening bracket
                st.pop();
            }
        }

        // After iterating through the string, if the stack is empty, all brackets are matched
        return st.empty();
    }
};
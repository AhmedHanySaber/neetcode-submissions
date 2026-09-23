#include <vector>    // For std::vector
#include <string>    // For std::string
#include <stack>     // For std::stack
#include <stdexcept> // For std::invalid_argument (for stoi, though not strictly needed for given constraints)

class Solution {
public:
    int evalRPN(std::vector<std::string>& tokens) {
        std::stack<long long> operands; 

        for (const std::string& token : tokens) {
            if (token == "+" || token == "-" || token == "*" || token == "/") {
                // It's an operator
                long long operand2 = operands.top();
                operands.pop();
                long long operand1 = operands.top();
                operands.pop();

                long long result;
                if (token == "+") {
                    result = operand1 + operand2;
                } else if (token == "-") {
                    result = operand1 - operand2;
                } else if (token == "*") {
                    result = operand1 * operand2;
                } else {
                    result = operand1 / operand2;
                }
                operands.push(result);
            } else {
              
                operands.push(std::stoll(token)); 
            }
        }

        return static_cast<int>(operands.top()); 
    }
};
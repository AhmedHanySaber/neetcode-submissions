#include <vector>    
#include <algorithm> 
class MinStack {
private:
    std::vector<int> mainStack; // Stores all elements
    std::vector<int> minStack;  // Stores minimums corresponding to elements in mainStack

public:
    // Constructor (no specific initialization needed for std::vector)
    MinStack() {
        // Default constructor for std::vector is sufficient
    }

    void push(int val) {
        mainStack.push_back(val); // Push to the main stack

        // Push 'val' to minStack only if it's the new minimum (or equal to it)
        // The 'minStack.empty()' check handles the first element
        // The '<= minStack.back()' handles subsequent elements, ensuring duplicates are also stored if they are minimums
        if (minStack.empty() || val <= minStack.back()) {
            minStack.push_back(val);
        }
    }

    void pop() {
        // Constraints state pop will always be called on non-empty stacks,
        // so no explicit empty check is strictly needed here per problem statement.
        // If the element being removed from mainStack is the current minimum,
        // then it also needs to be removed from minStack.
        if (mainStack.back() == minStack.back()) {
            minStack.pop_back();
        }
        mainStack.pop_back(); // Remove from the main stack
    }

    int top() {
        // Constraints state top will always be called on non-empty stacks.
        return mainStack.back(); // Returns the last element of mainStack
    }

    int getMin() {
        // Constraints state getMin will always be called on non-empty stacks.
        return minStack.back(); // Returns the last element of minStack (which is the current minimum)
    }
};

/**
 * Example Usage (from the problem description):
 * MinStack minStack = new MinStack();
 * minStack.push(1);
 * minStack.push(2);
 * minStack.push(0);
 * minStack.getMin(); // return 0
 * minStack.pop();
 * minStack.top();    // return 2
 * minStack.getMin(); // return 1
 */
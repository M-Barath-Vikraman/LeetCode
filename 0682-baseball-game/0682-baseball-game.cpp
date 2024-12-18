class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> stack;
        int ans = 0; 
        
        for(int i = 0; i < operations.size(); i++) {
            if (operations[i] == "C") {
                if (!stack.empty()) {
                    stack.pop();
                }
            }   
            else if (operations[i] == "D") {
                if (!stack.empty()) {
                    stack.push(stack.top() * 2);
                }
            }
            else if (operations[i] == "+") {
                if (stack.size() >= 2) {
                    int val1 = stack.top();
                    stack.pop();
                    int val2 = stack.top();
                    stack.push(val1); 
                    stack.push(val1 + val2);
                }
            } 
            else {
                // Convert the string to an integer and push to the stack
                stack.push(stoi(operations[i]));
            }
        }
                while (!stack.empty()) {
            ans += stack.top();
            stack.pop();
        }
        
        return ans;
    }
};

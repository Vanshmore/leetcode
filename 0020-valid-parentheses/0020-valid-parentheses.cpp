class Solution {
public:
    bool isValid(string s) {
            std::stack<char> parenthesesStack;
    std::unordered_map<char, char> mapping = {{')', '('}, {']', '['}, {'}', '{'}};
    
    for (char c : s) {
        if (mapping.find(c) != mapping.end()) {
            char topElement = parenthesesStack.empty() ? '#' : parenthesesStack.top();
            parenthesesStack.pop();
            if (topElement != mapping[c]) {
                return false;
            }
        } else {
            parenthesesStack.push(c);
        }
    }
    
    return parenthesesStack.empty();
    }
};
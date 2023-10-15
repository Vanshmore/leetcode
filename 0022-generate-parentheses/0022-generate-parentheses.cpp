class Solution {
public:
    vector<string> generateParenthesis(int n) {

        std::vector<std::string> result;
        backtrack("", 0, 0, n, result);
        return result;
    }
    
private:
    void backtrack(std::string s, int left, int right, int n, std::vector<std::string>& result) {
        if (s.length() == 2 * n) {
            result.push_back(s);
            return;
        }
        
        if (left < n) {
            backtrack(s + "(", left + 1, right, n, result);
        }
        if (right < left) {
            backtrack(s + ")", left, right + 1, n, result);
        }
    }  
    
};
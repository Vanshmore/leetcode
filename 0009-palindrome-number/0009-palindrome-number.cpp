class Solution {
public:
    bool isPalindrome(int x) {
        string str_x = to_string(x);
        return str_x == string(str_x.rbegin(), str_x.rend());
    }
};
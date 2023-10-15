class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        
        for (int i = n - 1; i >= 0; --i) {
            if (digits[i] < 9) {
                // If the digit is less than 9, simply increment it and return the result.
                digits[i]++;
                return digits;
            } else {
                // If the digit is 9, set it to 0 and continue to the next digit.
                digits[i] = 0;
            }
        }
        
        // If all digits are 9, add a new digit 1 at the beginning of the vector.
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
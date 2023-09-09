class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
    int expected_sum = n * (n + 1) / 2; // Sum of numbers from 0 to n
    int actual_sum = 0;
    
    for (int num : nums) {
        actual_sum += num; // Sum of elements in the array
    }
    
    return expected_sum - actual_sum;
        
    }
};
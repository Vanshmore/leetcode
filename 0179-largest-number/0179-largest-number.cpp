class Solution {
public:
    string largestNumber(vector<int>& nums) {
         std::sort(nums.begin(), nums.end(), [](int a, int b) {
            std::string num1 = std::to_string(a);
            std::string num2 = std::to_string(b);
            return num1 + num2 > num2 + num1;
        });

        // Handle the case where the largest number is 0
        if (nums[0] == 0) {
            return "0";
        }

        // Concatenate sorted numbers to form the largest number
        std::stringstream result;
        for (int num : nums) {
            result << num;
        }

        return result.str();
    }
};
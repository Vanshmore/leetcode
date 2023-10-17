class Solution {
public:
    int pivotIndex(vector<int>& nums) {
         int totalSum = 0;
    for (int num : nums) {
        totalSum += num;
    }

    int leftSum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        // Check if the left sum is equal to the right sum
        if (leftSum == totalSum - leftSum - nums[i]) {
            return i;
        }
        leftSum += nums[i];
    }

    // If no pivot index is found
    return -1;
    }
};
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int nonZeroIndex = 0;

    // Iterate through the array.
    for (int i = 0; i < nums.size(); ++i) {
        // If the current element is non-zero, move it to the position pointed by nonZeroIndex.
        if (nums[i] != 0) {
            std::swap(nums[i], nums[nonZeroIndex]);
            nonZeroIndex++;
        }
    }
    }
};
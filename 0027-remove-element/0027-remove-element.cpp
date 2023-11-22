class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
                // Using the erase-remove idiom
        nums.erase(std::remove(nums.begin(), nums.end(), val), nums.end());
        
        // Return the size of the modified vector
        return nums.size();

    }
};
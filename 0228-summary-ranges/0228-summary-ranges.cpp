class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
         std::vector<std::string> ranges;
    if (nums.empty()) {
        return ranges;
    }
    
    int start = nums[0];
    int end = nums[0];
    
    // Iterate through the sorted array to find ranges
    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] == end + 1) {
            // Extend the current range
            end = nums[i];
        } else {
            // Add the range to the list
            if (start == end) {
                ranges.push_back(std::to_string(start));
            } else {
                ranges.push_back(std::to_string(start) + "->" + std::to_string(end));
            }
            // Reset start and end for the new range
            start = nums[i];
            end = nums[i];
        }
    }
    
    // Add the last range to the list
    if (start == end) {
        ranges.push_back(std::to_string(start));
    } else {
        ranges.push_back(std::to_string(start) + "->" + std::to_string(end));
    }
    
    return ranges;
        
    }
};
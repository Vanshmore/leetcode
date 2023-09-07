class Solution {
public:
    void reverseArray(vector<int>& nums, int start, int end) {
    while (start < end) {
        swap(nums[start], nums[end]);
        start++;
        end--;
    }
}
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
    k %= n; 
       reverseArray(nums, 0, n - 1);

    // Reverse the first k elements
    reverseArray(nums, 0, k - 1);

    // Reverse the remaining elements
    reverseArray(nums, k, n - 1);
        
    }
};
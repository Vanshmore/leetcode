class Solution {
public:
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
         int n = arr.size();
    
    vector<int> max_values(n, 0);

    for (int i = 0; i < n; ++i) {
        int max_val = 0;
        for (int j = 1; j <= k && i - j + 1 >= 0; ++j) {
            max_val = max(max_val, arr[i - j + 1]);
            max_values[i] = max(max_values[i], (i >= j ? max_values[i - j] : 0) + max_val * j);
        }
    }

    return max_values[n - 1];
    }
};
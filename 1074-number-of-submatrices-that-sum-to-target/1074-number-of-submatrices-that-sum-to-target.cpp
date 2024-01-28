class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
    int cols = matrix[0].size();
    int count = 0;

    // Calculate the prefix sum for each row
    for (int i = 0; i < rows; ++i) {
        for (int j = 1; j < cols; ++j) {
            matrix[i][j] += matrix[i][j - 1];
        }
    }

    // Iterate through all possible pairs of columns and use prefix sum to find submatrix sums
    for (int col1 = 0; col1 < cols; ++col1) {
        for (int col2 = col1; col2 < cols; ++col2) {
            unordered_map<int, int> prefixSumCount;
            prefixSumCount[0] = 1;
            int currentSum = 0;

            // Iterate through each row to find submatrix sums using prefix sum
            for (int row = 0; row < rows; ++row) {
                int col1Sum = (col1 == 0) ? 0 : matrix[row][col1 - 1];
                int col2Sum = matrix[row][col2];
                currentSum += col2Sum - col1Sum;

                // Check if there is a submatrix with the target sum
                if (prefixSumCount.find(currentSum - target) != prefixSumCount.end()) {
                    count += prefixSumCount[currentSum - target];
                }

                // Update the prefix sum count
                prefixSumCount[currentSum]++;
            }
        }
    }

    return count;
    }
};
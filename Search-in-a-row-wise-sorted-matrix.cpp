class Solution {
  public:
    bool binarySearchRow(vector<vector<int>>& matrix, int target) {
    if (matrix.empty() || matrix[0].empty()) return false;
    for (const auto& row : matrix) {
        int left = 0, right = row.size() - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (row[mid] == target) {
                return true;
            } else if (row[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
    }
    return false;
}
    bool searchRowMatrix(vector<vector<int>> &mat, int x) {
        // code here
        return binarySearchRow(mat,x);
    }
};

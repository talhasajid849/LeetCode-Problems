class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
         if(matrix.empty() || matrix[0].empty()) return false;
         
        int col = matrix[0].size();
        int row = matrix.size();

        int st = 0, end = row * col - 1;
        while (st <= end) {
            int mid = st + (end - st) / 2;
            int mid_val = matrix[mid/col][mid%col];

            if (mid_val == target) {
                return true;
            } else if (mid_val > target) {
                end = mid - 1;
            } else {
                st = mid + 1;
            }
        }

        return false;
    }
};
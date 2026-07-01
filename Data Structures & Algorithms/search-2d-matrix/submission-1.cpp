class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int n = matrix.size();
        int m = matrix[0].size();

        if (n == 0) return false;

        //determine row

        int l = 0, r = n - 1;

        int row = -1;

        while (l <= r){
            int mid = l + (r - l) / 2;

            if (target <= matrix[mid][m-1] && target >= matrix[mid][0]){
                row = mid;
                break;
            }

            if (matrix[mid][m-1] > target){
                r = mid - 1;
            } else if (matrix[mid][m-1] < target){
                l = mid + 1;
            }
        }

        if (row == -1) return false;

        //standard binary search in correct row

        l = 0, r = m - 1;

        vector<int> foundRow = matrix[row];

        while (l <= r) {
            int mid = l + (r - l) / 2;

            if (foundRow[mid] == target){
                return true;
            }

            if (foundRow[mid] < target){
                l = mid + 1;
            }else{
                r = mid - 1;
            }
        }

        return false;
    }
};

bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int s = matrix[0].size();
        for(int i = 0;i<n;i++){
            if(binary_search(matrix[i].begin(),matrix[i].end(),target)){
                return 1;
            }
        }
        return 0;
    }

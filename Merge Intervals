vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> result;
        for(int i=0; i<intervals.size(); ++i){
            int start=intervals[i][0], end=intervals[i][1], j=i+1;
            while(j<intervals.size() and intervals[j][0]<=end)
                end = max(end, intervals[j][1]), ++j;
            result.push_back({start, end});
            i=j-1;
        }
        return result;
    }

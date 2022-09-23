class Solution {
public:
  vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        int sz = intervals.size();
        if(sz==0 || sz==1) return intervals;
        vector<vector<int>> output;
        sort(intervals.begin(), intervals.end());
        
        for(int i=0; i<sz-1; i++){
            int j = i+1;
            if(intervals[i][1] < intervals[j][0]){
                output.push_back(intervals[i]);
            }
            
            else {
                int temp = max(intervals[i][1], intervals[j][1]);
                intervals[j][0] = intervals[i][0];
                intervals[j][1] = temp;
            }
        }
        
        output.push_back(intervals[sz-1]);
        return output;
    }
};

class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n=position.size();
        vector<vector<int>> arr(n);
        for(int i=0;i<n;i++)
        {
            arr[i]={position[i],speed[i]};
        }
        sort(arr.begin(),arr.end());
        stack<double>st;
        for(int i=n-1;i>=0;i--)
        {
            if(st.empty()==false && st.top()<(target-arr[i][0])/(double)arr[i][1])
            {
                st.push((target-arr[i][0])/(double)arr[i][1]);
            }
            else if(st.empty())
            {
              st.push((target-arr[i][0])/(double)arr[i][1]);
            }
        }
        return st.size();
        
    }
};

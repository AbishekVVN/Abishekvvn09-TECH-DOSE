const int MOD = 1e9+7;

class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        vector<pair<long long, int> > vec;
        int n = arr.size();
        for(int i = 0; i<arr.size(); i++){
            vec.push_back({arr[i], i});
        }
        sort(vec.begin(), vec.end());
        set<int> used;
        int ans = ((vec[0].first*(vec[0].second+1)%MOD)*(n-vec[0].second))%MOD;
        used.insert(vec[0].second);
        for(int i = 1; i<n; i++){
            long long x = vec[i].first;
            int idx = vec[i].second;
            int l = 0, r = n-1;
            auto it = used.lower_bound(idx);
            if(it != used.end()){
                r = *it-1;
                if(it != used.begin()){
                    l = *prev(it)+1;
                }
            }else{
                l = *prev(used.end())+1;
            }
            long long a1 = (((idx-l+1)*(r-idx+1)%MOD)*x)%MOD;
            ans = (ans + a1)%MOD;
            used.insert(idx);
        }
        return ans;
    }
};

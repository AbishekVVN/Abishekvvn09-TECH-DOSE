class Solution {
public:
    int shipWithinDays(vector<int>& days, int k) {
        int n = days.size();
        int r = 0;
        int l = 0;
        for(int i=0; i<n; i++){
            r += days[i];
            l = max(l, days[i]);
        }
        
        while(l < r){
            int mid = l + (r-l)/2;
            int d = 1;
            int sum =0;
            for(int j=0; j<n; j++){
                sum += days[j];
                if(sum > mid){
                    d++;
                    sum = days[j];
                }
            }
            //cout << mid << ' ' << d << endl;
            if(d <= k){
                r = mid;
                
            }
            else
                l = mid+1;
            
        }
        return r;
    }
};

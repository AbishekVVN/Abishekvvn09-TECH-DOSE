class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char,int>mp;
        int ct=0;
        for(auto m:tasks){
            mp[m]++;
            ct=max(ct,mp[m]);
        }
        int flag=(ct-1)*(n+1);
        for(auto a: mp)
        if(a.second==ct)flag++;
        return max((int)tasks.size(),flag);
    }
};

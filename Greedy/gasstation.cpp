class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int curr=0;
        int tf=0,tc=0;
        int d=0;
        int s=0;
        for(int i=0;i<gas.size();i++){
            tf+=gas[i];
        }
        for(int i=0;i<gas.size();i++){
            tc+=cost[i];
        }
        if(tf<tc){
            return -1;
        }
        for(int i=0;i<gas.size();i++){
            curr+=(gas[i]-cost[i]);
            if(curr<0){
                s=i+1;
                curr=0;
            }
        }
        return s;
    }
};

class Solution {
public:
    int minSubArrayLen(int target, vector<int>&nums) {
        int n=nums.size();
        int ans=INT_MAX;
        int left=0;
        int length=0;
        int sum=0;
        while(true){
            if(sum>=target){
                ans=min(ans,length);
                sum-=nums[left++];
                length--;
            }
            else
            {
                if((left+length)==n){
                    break;
                }
                sum+=nums[left+length++];
            }
        }
        return ans<INT_MAX ?ans :0;
        
    }
};

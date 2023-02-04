class Solution {
public:
   int rec(int rem,int ind,vector<int>& nums,vector<vector<int>>&dp)
   {
       if (ind>=nums.size()-1) return 0;
       if (rem==0 && nums[ind]==0) return  1e7;
       if (dp[ind][rem]!=-1) return dp[ind][rem];
       int pick=1e7;
       int temp=max(rem,nums[ind]);
       pick=1+rec(temp-1,ind+1,nums,dp);
       int notPick=1e7;
       if (rem!=0)
       notPick=rec(rem-1,ind+1,nums,dp);
       return dp[ind][rem]=min(pick,notPick);
   }
     int jump(vector<int>& nums) {
         int n=nums.size();
         vector<vector<int>>dp(n,vector<int>(1001,-1));
         return rec(0,0,nums,dp);
     }
};

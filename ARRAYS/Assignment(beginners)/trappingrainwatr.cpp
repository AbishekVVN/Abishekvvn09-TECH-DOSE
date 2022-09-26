class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int lMax[n],RMax[n];
        long long res=0;
        lMax[0]=height[0];
        for(int i=1;i<n;i++)
        {
            lMax[i]=max(height[i],lMax[i-1]);
        }
        RMax[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--)
        {
            RMax[i]=max(height[i],RMax[i+1]);
        }
        for(int j=1;j<n-1;j++)
        {
            res+=(min(lMax[j],RMax[j])-height[j]);
        }
        
        return res;
    }
};

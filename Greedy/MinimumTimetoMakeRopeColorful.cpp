class Solution {
public:
    int minCost(string colors, vector<int>& T) {

        int n=colors.size();
        int a=0;
        for(int i=0;i<n-1;i++)
        {
            if(colors[i]==colors[i+1])
            {
                int mn=min(T[i],T[i+1]);
                a+=mn;
                T[i+1]=max(T[i],T[i+1]);
            }
        }
        return a;
        
    }
};

class NumArray {
public:
    vector <int> pre;
    NumArray(vector<int>& v) {
        int i;
        for(i=0;i<v.size();i++)
        {
            if(i==0)
            {
                pre.push_back(v[i]);
            }
            else
            {
                pre.push_back(pre[i-1]+v[i]);
            }
        }
    }
    
    int sumRange(int left, int right) {
        if(left==0)
        {
            return pre[right];
        }
        else
        {
            return pre[right]-pre[left-1];
        }
    }
};

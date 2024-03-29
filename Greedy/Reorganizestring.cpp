class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char, int> mp;
        int mx=0;
        char ch;
        for(char c:s)
        {
            mp[c]++;
            if(mx<mp[c])
            {
                mx=mp[c];
                ch=c;
            }
        }
        int n=s.size();
        vector<char> v(n);
        int i=0;
        while(mx--)
        {
            if(i>=n)
            return "";
            v[i]=ch;
            i+=2;
        }
        for(auto it:mp)
        {
            if(it.first!=ch)
            {
                int k=it.second;
                while(k--)
                {
                    if(i>=n)
                    i=1;
                    v[i]=it.first;
                    i+=2;
                }
            }
        }
        string ans;
        for(char c:v)
        ans+=c;
        return ans;
    }
};

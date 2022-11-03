class Solution {
public:
    string longestDupSubstring(string s) {
        
		// map to store the indices of each character
        unordered_map<char, vector<int>> hash;
        int n = s.length();
        
        for(int i=0; i<n; i++)
            hash[s[i]].push_back(i);
        
		// Max stores the length of the longest duplicate substring found till now
		// index stores the starting position of the substring
        int Max = 0, index = -1;
        
        for(int i=0; i<n; i++)
        {
			// Here f stores the current character
            char f = s[i];
			
			// erasing the current index
            hash[f].erase(hash[f].begin());
            
			// after erasing, checking the longest substring possible starting with the current character
            for(int it : hash[f])
            {
				// j stores the max length of the duplicate substring found till
                int j = 0;
                
				// incrementing j till index not out of bound and both characters are duplicate
                while(i+j < n and it+j < n and s[i+j] == s[it+j])
                    j++;
                
                if(j > Max)
                {
                    Max = j;
                    index = i;
                }
                
				// this is required when we achieved the longest substring possible 
                if(Max == n-i-1)
                    return s.substr(index, Max);
            }
        }
        
        if(Max == 0)
            return "";
        
        else
            return s.substr(index, Max);
    }
};

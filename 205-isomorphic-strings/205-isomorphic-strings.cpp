class Solution {
public:
   
     bool isIsomorphic(string s, string t) 
    {
        int n = s.size();
        unordered_map<char, int> m, p;
        
        for(int i=0; i<n; i++)
        {
            if(m[s[i]])
                if(m[s[i]] != t[i])
                    return false;
            if(p[t[i]])
                if(p[t[i]] != s[i])
                    return false;
            
            m[s[i]] = t[i];
            p[t[i]] = s[i];
        }
        
        return true;
    }
};
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>need(26,0),have(26,0);
        for( char c : s1)
        {
            need[c-'a']++;
        }
        int m=s1.length(),n=s2.length();
        if(m > n)
        {
            return false;
        }
        for(int i=0;i<m;i++)
        {
            have[s2[i]-'a']++;
        }
        if(need==have)return true;
        int left=0;
        for(int right=m;right<n;right++)
        {
            have[s2[right]-'a']++;
            have[s2[left]-'a']--;
            
            left++;
            if(need==have)
            {
                return true;
            }
        }
        return false;
    }
};

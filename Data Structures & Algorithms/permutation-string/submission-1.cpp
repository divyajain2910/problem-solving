class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int>need,have;
        for( char c : s1)
        {
            need[c]++;
        }
        int m=s1.length(),n=s2.length();
        if(m > n)
        {
            return false;
        }
        for(int i=0;i<m;i++)
        {
            have[s2[i]]++;
        }
        if(need==have)return true;
        int left=0;
        for(int right=m;right<n;right++)
        {
            have[s2[right]]++;
            have[s2[left]]--;
            if(have[s2[left]]==0)
            {
                have.erase(s2[left]);
            }
            left++;
            if(need==have)
            {
                return true;
            }
        }
        return false;
    }
};

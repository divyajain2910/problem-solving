class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>mp(26,0);
        int l=0,maxfreq=0,ans=0;
        for(int h=0;h<s.length();h++)
        {
            mp[s[h]-'A']++;
            maxfreq=max(maxfreq, mp[s[h]-'A']);

            while((h-l+1-maxfreq) > k)
            {
                mp[s[l]-'A']--;
                l++;
            }
            ans = max(ans, h-l+1);
        }
        return ans;
    }
};

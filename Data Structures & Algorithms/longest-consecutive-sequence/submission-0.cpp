class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        for(int x : nums)
        {
            s.insert(x);
        }
        int ans=0;
        for(int x : nums)
        {
            if(!s.count(x-1))
            {
                int length=1;
                while(s.count(x+length))
                {
                    length++;
                }
                ans=max(ans,length);
            }
        }
        return ans;
    }
};

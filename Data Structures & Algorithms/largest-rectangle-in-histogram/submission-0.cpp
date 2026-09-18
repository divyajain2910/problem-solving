class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        stack<int>st;
        vector<int>right(n,0);
        vector<int>left(n,0);
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() and heights[i]<=heights[st.top()])
            {
                st.pop();
            }
            right[i]=st.empty() ? n : st.top();
            st.push(i);
        }
        while(!st.empty())
        {
            st.pop();
        }
        for(int i=0;i<n;i++)
        {
            while(!st.empty() and heights[i]<=heights[st.top()])
            {
                st.pop();
            }
            left[i]=st.empty() ? -1 : st.top();
            st.push(i);
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int width=right[i]-left[i]-1;
            int curr=width*heights[i];
            ans=max(ans,curr);
        }
        return ans;
    }
};

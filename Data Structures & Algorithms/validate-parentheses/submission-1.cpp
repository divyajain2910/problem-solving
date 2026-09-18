class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(auto c : s)
        {
            if(c=='[' or c=='{' or c=='(')
            {
                st.push(c);
                continue;
            }
            else
            {
                if(st.empty())return false;
                if((c==']' and st.top()!='[') or (c=='}' and st.top()!='{')
                or (c==')' and st.top()!='('))
                {
                    return false;
                }
                st.pop();
            }
        }
        return st.empty();
    }
};

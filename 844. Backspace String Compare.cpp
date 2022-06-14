

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>ss;
        stack<char>st;
        for(int i=0;i<s.length();i++){
            if(!ss.empty() && s[i]=='#')ss.pop();
            else if(s[i]!='#') ss.push(s[i]);
        }
        for(int i=0;i<t.length();i++){
            if(!st.empty() && t[i]=='#')st.pop();
            else if(t[i]!='#') st.push(t[i]);
        }
        while(!ss.empty() && !st.empty()){
            if(ss.top()!=st.top())return false;
            else {
                ss.pop();
                st.pop();
            }
        }
        return(ss.empty() && st.empty());
    }
};

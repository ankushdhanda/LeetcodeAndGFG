class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        vector<int>sv1(26,0);
        vector<int>sv2(26,0);
        if(s1.length()!=s2.length())return false;
        for(int i=0;i<s1.length();i++){
            sv1[s1[i]-'a']++;
        }
        for(int i=0;i<s2.length();i++){
            sv2[s2[i]-'a']++;
        }
        if(sv1 != sv2)return false;
        int count=0;
        for(int i=0;i<s1.length();i++){
            if(s1[i]!=s2[i])count++;
        }
        if(count >2)return false;
        return true;
    }
};

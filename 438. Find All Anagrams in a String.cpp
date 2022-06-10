class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>res;
        int plen=p.length();
        if(plen>s.length())return {};
        int arrp[26]={0};
        for(int i=0;i<p.length();i++){
            arrp[p[i]-'a']++;
        }
        int arrs[26]={0};
        for(int i=0;i<p.length();i++){
            arrs[s[i]-'a']++;
        }
        for(int i=0;i<=(s.length()-plen);i++){
            bool flag=true;
            for(int i=0;i<26;i++){
                
                if(arrp[i]!=arrs[i]){
                    flag=false;
                    break;
                }
                
            }
            if(flag==true)
                res.push_back(i);
            arrs[s[i]-'a']--;
            if(i+plen<s.length())
            arrs[s[i+plen]-'a']++;
        }
        return res;
    }
   
};

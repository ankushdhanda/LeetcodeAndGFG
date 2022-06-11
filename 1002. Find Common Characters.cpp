1002. Find Common Characters

class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int>vec1(26,0);
        vector<int>vec2(26,0);
        for(auto i:words[0]){
            vec1[i-'a']++;
            }
        for(int i=1;i<words.size();i++){
            for(int j=0;j<words[i].size();j++){
                vec2[words[i][j]-'a']++;
            }
            for(int j=0;j<26;j++){
                vec1[j]=min(vec1[j],vec2[j]);
                vec2[j]=0;
            }
        }
        vector<string>ans;
        for(int i=0;i<26;i++){
            while(vec1[i]>0){
                char a='a'+i;
                string s;
                s=a;
                ans.push_back(s);
                vec1[i]--;
            }
        }
       return ans; 
    }
};

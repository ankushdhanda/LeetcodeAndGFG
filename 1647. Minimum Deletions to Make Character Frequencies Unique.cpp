class Solution {
public:
    int minDeletions(string s) {
        vector<int>freq(26,0);
        for(int i=0;i<s.length();i++){
            freq[s[i]-'a']++;
        }
        int ans=0;
        for(int i=0;i<26;i++){
            for(int j=0;j<26;j++){
                if(i!=j && freq[i]>0 && freq[i]==freq[j]){
                    ans++;
                    freq[j]--;
                    i=0;
                    break;
                } 
            }
        }
        return ans;
    }
};
//Try this question with priority queue and other methods such as map and set//

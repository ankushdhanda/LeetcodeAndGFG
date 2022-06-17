class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        int count=0;
        for(auto it:mp){
            if(it.second >=2){
                count+=(it.second/2)*2;
                
            }
        }
        for(auto it:mp){
            if((it.second)%2==1){
                count++;
                break;
            }
        }
        return count;
    }
};

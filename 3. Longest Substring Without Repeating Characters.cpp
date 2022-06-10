//BRUTE FORCE
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int res=1;
        if(n==0)return 0;
        for(int i=0;i<n;i++){
            
            int count=0;
            unordered_map<char,int>mp;
            for(int j=i;j<n;j++){
                if(mp.find(s[j])==mp.end()){
                    count++;
                    res=max(res,count) ;
                    mp[s[j]]++;
                }
                else{
                   
                    break;
                }
            }
        }
        return res;
    }
};

class Solution {
public:
    string firstPalindrome(vector<string>& words) {
       for(int i=0;i<words.size();i++){
           if(isPalindrome(words[i]))return words[i];
       }
        return "";
    }
    bool isPalindrome(string s){
        int l=0;
        int r=s.length()-1;
        while(l<r){
            if(s[l]!=s[r])return false;
            else l++,r--;
        }
        return true;
    }
};

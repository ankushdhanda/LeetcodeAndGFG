class Solution {
public:
    bool isHappy(int n) {
        int totalsum=0;
        set<int>seen;
        while(n!=1 && seen.find(n)==seen.end()){
            seen.insert(n);
            n=getnext(n);
        }
        return n==1;
    }
    int getnext(int n){
        int totalsum=0;
        while(n>0){
            int d=n%10;
            totalsum+=d*d;
            n=n/10;
        }
        return totalsum;
    }
};

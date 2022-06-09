class Solution{
public:
    int rank(string S){
        int rank=1;
        int n=S.length();
        int mul=fac(n);
        int count[256]={0};
        for(int i=0;i<n;i++){
            count[S[i]]++;
            if(count[S[i]]==2)return 0;
        }
        for(int i=1;i<256;i++){
            count[i]+=count[i-1];
        }
        for(int i=0;i<n;i++){
            mul=mul/(n-i);
            rank=rank+(count[S[i]-1]*mul);
            for(int j=S[i];j<256;j++){
                count[j]--;
            }
        }
        return rank%1000003;
    }
    
    
    
    int fac(int n){
        if(n==1)
        return 1;
        return n*fac(n-1);
    }
};

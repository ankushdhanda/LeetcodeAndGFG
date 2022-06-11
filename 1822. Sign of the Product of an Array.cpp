class Solution {
public:
    int arraySign(vector<int>& nums) {
        int pos=0;
        int neg=0;
        int zer=0;
        for(auto i:nums){
            if(i>0)pos++;
            else if(i==0)zer++;
            else neg++;
        }
        return signFunc(pos,neg,zer);
    }
    int signFunc(int pos,int neg,int zer){
        if(zer>0)return 0;
        else if(neg%2==0 )return 1;
        else return -1;
    }
};

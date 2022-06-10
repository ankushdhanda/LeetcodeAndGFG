class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        int cl;
        for(int i=0;i<n;i++){
            bool celeb=true;
            for(int j=0;j<M[0].size();j++){
                
                if(M[i][j]!=0){
                    celeb=false;
                    break;
                }
            }
            if(celeb==true)cl= i;
        }
        bool celeb=true;
        for(int i=0;i<n;i++){
            if(i!=cl && M[i][cl]!=1){
                celeb=false;
                break;
            }
        }
        if(celeb==true)return cl;
        return -1;
    }
};

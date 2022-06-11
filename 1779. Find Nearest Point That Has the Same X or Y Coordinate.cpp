class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        unordered_map<int,int>mp;
        int mhdistance=INT_MAX;
        int res;
        for(int i=0;i<points.size();i++){
            int x1=points[i][0];
            int y1=points[i][1];
            if(x==x1 || y==y1){
                res=abs(x-x1)+abs(y-y1);
                mhdistance=min(mhdistance,res);
                if(mp.find(res)!=mp.end())
                mp[res]=min(i,mp[res]);
                else mp[res]=i;
            }
        }
        if(mp.empty())return -1;
        return mp[mhdistance];
    }
};

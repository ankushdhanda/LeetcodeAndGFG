class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        int fl=0;
        int n=firstList.size();
        int sl=0;
        int m=secondList.size();
        vector<vector<int>>res;
        while(fl<n && sl<m){
            int st=max(firstList[fl][0],secondList[sl][0]);
            int en=min(firstList[fl][1],secondList[sl][1]);
            if(st<=en)
            res.push_back({st,en});
            if(firstList[fl][1]>secondList[sl][1])sl++;
            else fl++;
        }
        return res;
    }
};

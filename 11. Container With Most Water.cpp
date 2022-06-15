class Solution {
public:
    int maxArea(vector<int>& height) {
        int st=0;
        int en=height.size()-1;
        int maxA=0;
        while(st<en){
            int width=en-st;
            int length=min(height[st],height[en]);
            int area=width*length;
            maxA=max(area,maxA);
            if(height[st]<=height[en])st++;
            else en--;
        }
      return maxA;      
    }
};

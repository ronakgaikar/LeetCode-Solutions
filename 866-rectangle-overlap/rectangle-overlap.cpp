class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        int left1 = rec1[0];
        int bottom1 = rec1[1];
        int right1 = rec1[2];
        int top1 = rec1[3];

        int left2 = rec2[0];
        int bottom2 = rec2[1];
        int right2 = rec2[2];
        int top2 = rec2[3];

        int x_dist = min(right1,right2)-max(left1,left2);
        int y_dist = min(top1,top2)-max(bottom1,bottom2);

        return x_dist>0 && y_dist>0;
    }
};
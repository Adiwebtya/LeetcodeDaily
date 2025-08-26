class Solution {
    int maxA = 0;double d = 0;
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int n = dimensions.size();

        for(int i=0;i<n;i++){
            int l = dimensions[i][0];int w = dimensions[i][1];

            double dd = sqrt(l*l + w*w);
            int area = l*w;
            if(dd > d){
                d = dd;
                maxA = area;
            }
            else if(dd == d){
                maxA = max(maxA, area);
            }
        }
        return maxA;

    }
};
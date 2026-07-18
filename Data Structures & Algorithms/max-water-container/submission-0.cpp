class Solution {
public:
    int maxArea(vector<int>& heights) {
    {
    int n = heights.size();
    int L = 0;
    int R = n - 1;
    int maxarea = 0;

    while (L < R) {
        int width = R - L;
        int level = min(heights[L], heights[R]);
        int area  = width * level;
        maxarea = max(maxarea, area);

        if (heights[L] < heights[R])
            L++;
        else
            R--;
    }

    return maxarea;
}
    }
};

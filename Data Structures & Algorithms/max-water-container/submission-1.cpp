class Solution {
public:
    int maxArea(vector<int>& heights) {
        if(heights.empty()) return 0;
        int i = 0, j = heights.size() - 1;
        int max_area = 0;
        while(i < j) {
                int current_area = (j-i)*min(heights[i], heights[j]);
                max_area = max(max_area, current_area);

                if(heights[i] < heights[j]) {
                        i++;
                } else {
                        j--;
                }
        }
        return max_area;
    }
};

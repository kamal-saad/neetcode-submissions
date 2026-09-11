class Solution {
public:
    int maxArea(vector<int>& heights) {
        if(heights.empty()) return 0;
        int i = 0, j = heights.size() - 1;
        int max_area = 0;
        while(i < j) {
                int current_area = (j-i)*std::min(heights[i], heights[j]);
                if(current_area > max_area) {
                        max_area = current_area;
                }

                if(heights[i] < heights[j]) {
                        i++;
                } else {
                        j--;
                }
        }
        return max_area;
    }
};

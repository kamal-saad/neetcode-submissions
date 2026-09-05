class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;

        unordered_set<int> nums_set(nums.begin(), nums.end());
        int max_length = 0;

        for(int &num : nums) {
            int current_num = num;
            int current_length = 0;

            if(!(nums_set.contains(current_num - 1))) {
                current_length = 1;

                while(nums_set.contains(current_num + 1)) {
                    current_num++;
                    current_length++;
                }
            }
            max_length = max(max_length, current_length);
        }
        return max_length;

  }
};

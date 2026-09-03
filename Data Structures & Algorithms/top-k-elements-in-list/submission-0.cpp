class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> hashArray;
        vector<vector<int>> list(nums.size() + 1);
        vector<int> result;

        for(int num : nums)
            hashArray[num]++;

        for(auto pos : hashArray)
            list[pos.second].push_back(pos.first);

        int i = list.size() - 1, j = 0;
        while(j < k && i >= 0) {
            int x = 0;
            if(!list[i].empty()) {
                while(x < list[i].size() && j < k) {
                    result.push_back(list[i][x]);
                    x++;
                    j++;
                }
            }
            i--;
        }
        
        return result;
    }
};

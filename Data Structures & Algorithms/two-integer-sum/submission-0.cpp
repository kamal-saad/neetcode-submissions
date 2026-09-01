class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashArray;
        vector<int> result;
        for(int i = 0; i < nums.size(); i++) {
            if (hashArray.contains(target - nums[i])) {
                result.push_back(hashArray[target - nums[i]]);
                result.push_back(i);
                return result;
            }
            hashArray.insert({nums[i], i});
        }
        return {};
    }
};

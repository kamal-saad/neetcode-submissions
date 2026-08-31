#include <algorithm>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> hashMap;
        for(int i = 0; i < nums.size(); i++) {
            if(hashMap.contains(nums[i]))
                return true;
            hashMap.insert({nums[i], nums[i]});
        }
        return false;

    }
};
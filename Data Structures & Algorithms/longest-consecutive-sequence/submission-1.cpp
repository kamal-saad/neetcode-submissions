class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == NULL) return 0;
    unordered_set<int> nums_set;
    vector<int> res;
    int length = 0;
    for(int& num : nums) {
        nums_set.insert(num);
    }
    for(int i = 0; i < nums.size(); i++) {
        int num = nums[i];
        int j = 1;
        vector<int> temp_vec;
        while(nums_set.contains(num - j)) {
            nums_set.erase(num - j);
            j++;
            i++;
        }
        int k = 1;
        while(nums_set.contains(num + k)) {
            nums_set.erase(num + k);
            k++;
            i++;
        }
        nums_set.erase(num);
        k--;
        res.push_back(j+k);
    }
    int max = *max_element(res.begin(), res.end());
    return max;

}
};

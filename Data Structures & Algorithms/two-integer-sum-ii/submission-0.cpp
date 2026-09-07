class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0, j = numbers.size() - 1;
        std::vector<int> res;
        while (i < j) {
                while ((numbers[i] + numbers[j]) > target && (i < j)) {
                        j--;
                }
                while ((numbers[i] + numbers[j]) < target && (i < j)) {
                        i++;
                }
                if ((numbers[i] + numbers[j]) == target && (i != j)) {
                        res.push_back(i+1);
                        res.push_back(j+1);
                        return res;
                }
        }
        return res;
    }
};

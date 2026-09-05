class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hashTable;
        vector<vector<string>> res;
        int hash[26] = {0};
        int count;
        string s_count;
        for(int i = 0; i < strs.size(); i++) {
            s_count = "";
            count = 0;
            while(count < strs[i].size()) {
                int ele = strs[i][count] - 97;
                hash[ele]++;
                count++;
            }
            count = 0;
            while(count < 26) {
                if(hash[count] != 0) {
                    s_count = s_count + to_string(count) + to_string(hash[count] + '#');
                    hash[count] = 0;
                }
                count++;
            }
            hashTable[s_count].push_back(strs[i]);
        }
        for(auto element : hashTable) {
            res.push_back(element.second);
        }
        return res;
    }
};

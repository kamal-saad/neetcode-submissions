class Solution {
public:

    string encode(vector<string>& strs) {
        string result = "";
        for(int i = 0; i < strs.size(); i++) {
            result += to_string(strs[i].size()) + "#" + strs[i];
        }
        return result;
    }

    vector<string> decode(string s) {
        vector<string> strs;
        int i = 0;
        while(i < s.size()) {
            string s_length = "";
            int length = 0;
            while (s[i] != '#') {
                s_length += s[i];
                i++;
            }
            i++;
            length = std::stoi(s_length);
            strs.push_back(s.substr(i, length));
            i += length;
        }
        return strs;
    }
};

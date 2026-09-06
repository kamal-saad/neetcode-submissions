class Solution {
public:
    bool isPalindrome(string s) {

        transform(s.begin(), s.end(), s.begin(),
        [](unsigned char c){ return tolower(c); });

        s.erase(remove_if(s.begin(), s.end(), [](char c) { 
        return !isalnum(static_cast<unsigned char>(c)); 
    }), s.end());

    if(s.empty()) return true;

        for(size_t i = 0, j = s.size() - 1; i < j; i++, j--) {
            if(s[i] != s[j])
                return false;
        }
        return true;
    }
};

class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(),
        [](unsigned char c){ return tolower(c); });

        if(s.empty()) return true;

        int i = 0, j = s.size() - 1;

        for(; i < j; i++, j--) {
            while(!isalnum(s[i]) && i < j)
                i++;
            while(!isalnum(s[j]) && i < j)
                j--;
            if(s[i] != s[j])
                return false;
        }
        return true;
    }
};

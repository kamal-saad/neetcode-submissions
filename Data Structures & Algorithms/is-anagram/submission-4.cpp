class Solution {
public:
    bool isAnagram(string s, string t) {
        int alphabets[26] = {0};
        if(s.length() != t.length()) {
            return false;
        }
        for(int i : s) {
            if(i >= 97 && i <= 122)
                alphabets[i-97]++;
        }
        for(int i : t) {
            if(i >= 97 && i <= 122)
                alphabets[i-97]--;
        }
        for(int i : alphabets) {
            if(i != 0)
                return false;
        }
        
        return true;
    }
};

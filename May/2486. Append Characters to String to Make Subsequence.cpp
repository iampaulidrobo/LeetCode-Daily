class Solution {
public:
    bool searchforchar(char t, string s, int& start) {
        for (int i = start; i < s.size(); i++) {
            if (s[i] == t) {
                start = i+1;
                return true;
            }
        }
        return false;
    }
    int appendCharacters(string s, string t) {

        int result{0};
        int start{0};
       
        for (int i = 0; i < t.size(); i++) {
            
            if (!searchforchar(t[i], s, start)) {
                result = t.size() - i;
                break;
            }
        }
        return result;
    }
};
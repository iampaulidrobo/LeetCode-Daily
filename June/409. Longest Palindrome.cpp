class Solution {
public:
    int longestPalindrome(const std::string& s) {
        int result{0};
        bool odd = false;

        unordered_map<char, int> umap;
        for (int i = 0; i < s.size(); i++) {
            umap[s[i]]++;
        }
        for (auto it = umap.begin(); it != umap.end(); it++) {
            if (it->second % 2 == 0) {
                // even
                result = result + it->second;
            } else {
                odd = true;
                // odd
                it->second--;
                result = result + it->second ;
            }
        }
        if(odd==true){result++;}

        return result;
    }
};

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int result{0};
        unordered_map<int, int> umap;
        int sum{0};
        for (int i = 0; i < nums.size(); i++) {
            sum = sum + nums[i];
            if (sum % k == 0)
                result++;
            int remainder = sum % k;
            if (remainder < 0) {
                remainder = remainder + k;
            }
            auto it = umap.find(remainder % k);
            if (it != umap.end()) {
                    result = result + it->second;
                }
            umap[remainder % k]++;
        }
        return result;
    }
};
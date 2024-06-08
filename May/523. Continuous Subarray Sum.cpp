class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {

        unordered_map<int, int> umap;
        int sum{0};
        if (nums.size() > 1) {
            for (int i = 0; i < nums.size(); i++) {
                if (i > 0 && nums[i] == 0 && nums[i - 1] == 0) {
                    return true;
                } else {
                    sum = sum + nums[i];
                    auto it = umap.find(sum % k);
                    if (it != umap.end()) {
                        if (nums[i] != 0 &&
                            (nums[i] % k != 0 || nums[i - 1] == 0)) {
                            return true;
                        }
                    }
                    if (sum % k == 0 && sum != nums[0]) {
                        return true;
                    }

                    umap[sum % k] = i;
                }
            }
        }
        return false;
    }
};
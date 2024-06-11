class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> result;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            if (i == nums.size() - 1) {
                result.push_back(nums[i]);
                break;
            }
            if ((nums[i] ^ nums[i + 1]) == 0) {
                i++;
            } else {
                result.push_back(nums[i]);
            }
        }
        return result;
    }
};
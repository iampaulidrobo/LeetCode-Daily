class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long int res{0};
        std::sort(happiness.begin(), happiness.end(),greater<int>());

        for (int i = 0; i < k; i++) {
            happiness[i]=max(happiness[i]-i,0);
            res +=  happiness[i];
        }
        return res;
    }
};
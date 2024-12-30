class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {

        vector<int> parity_storage;
        int n{0};
        for(int i;i<nums.size();i++){

        if(nums[i]%2==0){parity_storage.push_back('e');}
        else {parity_storage.push_back('o');}

        }
        for(auto &query:queries){
            for (auto &q:query)
            {
               
            }
            

        }


        
    }
};
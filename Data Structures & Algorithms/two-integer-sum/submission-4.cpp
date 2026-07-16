class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int,int> indices;

        for (int i = 0; i < nums.size(); i++){
            indices[nums[i]] = i;
        }

        for (int i = 0; i < nums.size(); i++){
            int diff = target - nums[i];

            if (indices.contains(diff) && i != indices[diff]){
                return {i,indices[diff]};
            }
        }

        return {};
    }
};

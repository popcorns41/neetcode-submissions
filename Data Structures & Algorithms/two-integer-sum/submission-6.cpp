class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int,int> indices;

        for (int i = 0; i < nums.size();i++){
            indices[nums[i]] = i;
        }

        for (int i = 0; i < nums.size();i++){
            int diff = target - nums[i];
            auto it = indices.find(diff);
            if (it != indices.end() && indices[diff] != i){
                return {i,it->second};
            }
        }

        return {};
    }
};

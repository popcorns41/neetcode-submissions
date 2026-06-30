class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;

        for (int x : nums){
            if (freq.count(x)){
                freq[x]++;
            }else{
                freq[x] = 1;
            }
        }

        vector<pair<int,int>> items(freq.begin(),freq.end());

        auto sortBySecondFunc = [](const auto& a, const auto& b){
            return a.second > b.second;
        };
        sort(items.begin(),items.end(),sortBySecondFunc);

        vector<int> res;
        for (int i = 0; i < k;i++){
            res.push_back(items[i].first);
        }

        return res;
    }
};

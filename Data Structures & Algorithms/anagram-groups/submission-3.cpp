class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<std::string,std::vector<std::string>> anagramMap;

        for (std::string str : strs) {
            std::string sortString = str;
            sort(sortString.begin(),sortString.end());
            anagramMap[sortString].push_back(str);
        }

        std::vector<std::vector<std::string>> res;

        for (const auto& pair : anagramMap){
            res.push_back(pair.second);
        }

        return res;
    }
};

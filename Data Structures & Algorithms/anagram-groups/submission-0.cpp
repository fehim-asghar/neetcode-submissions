class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>order;
        for (string word : strs){
            string key = word;
            sort(key.begin(),key.end());
            order[key].push_back(word);
        }

        vector<vector<string>> result;
        for (auto& [key,words]:order){
            result.push_back(words);
        }

        return result;
        
    }
};

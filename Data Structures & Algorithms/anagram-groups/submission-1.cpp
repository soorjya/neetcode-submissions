class Solution {
public:
    // vector<vector<string>> groupAnagrams(vector<string>& strs) {
    //     unordered_map<string, vector<string>> res;

    //     for (int i = 0; i < strs.size(); i++) {
    //         string word = strs[i];
    //         vector<int> count(26, 0);  

    //         for (int j = 0; j < word.length(); j++) {
    //             char c = word[j];
    //             count[c - 'a']++;
    //         }

    //         string key = "";
    //         for (int k = 0; k < 26; k++) {
    //             key += to_string(count[k]) + ",";
    //         }

    //     }

    //     vector<vector<string>> result;
    //     for (unordered_map<string, vector<string>>::iterator it = res.begin(); it != res.end(); ++it) {
    //         result.push_back(it->second);
    //     }

    //     return result;
    // }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups;

        for (int i = 0; i < strs.size(); i++) {
            string original = strs[i];
            string sortedWord = original;
            sort(sortedWord.begin(), sortedWord.end());  
            groups[sortedWord].push_back(original);  
        }

        vector<vector<string>> result;

        for (unordered_map<string, vector<string>>::iterator it = groups.begin(); it != groups.end(); ++it) {
            result.push_back(it->second);
        }

        return result;
    }
};



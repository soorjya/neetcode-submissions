class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded = "";
        for (int i = 0; i < strs.size(); i++) {
            encoded += to_string(strs[i].length()) + "#" + strs[i];
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int i = 0;
        while (i < s.length()) {
            // Step 1: Find the length part (before '#')
            int j = i;
            while (s[j] != '#') {
                j++;
            }
            int length = stoi(s.substr(i, j - i));

            string word = s.substr(j + 1, length);
            result.push_back(word);

            i = j + 1 + length;
        }
        return result;
    }
};

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // Step 1: Count frequency using a map
        unordered_map<int, int> freqMap;
        for (int i = 0; i < nums.size(); i++) {
            freqMap[nums[i]]++;
        }

        // Step 2: Move data into a vector of pairs (frequency, number)
        vector<pair<int, int>> freqList;
        for (int i = -1000; i <= 1000; i++) {
            if (freqMap.count(i) > 0) {
                freqList.push_back(make_pair(freqMap[i], i)); // (frequency, number)
            }
        }

        // Step 3: Sort the vector in descending order by frequency
        sort(freqList.begin(), freqList.end(), greater<pair<int, int>>());

        // Step 4: Collect top k numbers
        vector<int> result;
        for (int i = 0; i < k; i++) {
            result.push_back(freqList[i].second); // get the number
        }

        return result;
    }
};

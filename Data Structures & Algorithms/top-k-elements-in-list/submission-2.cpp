class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> freqMap;
        for (int i = 0; i < nums.size(); i++) {
            freqMap[nums[i]]++;
        }

        vector<pair<int, int>> freqList;
        for (int i = -1000; i <= 1000; i++) {
            if (freqMap.count(i) > 0) {
                freqList.push_back(make_pair(freqMap[i], i)); 
            }
        }


        sort(freqList.begin(), freqList.end(), greater<pair<int, int>>());


        vector<int> result;
        for (int i = 0; i < k; i++) {
            result.push_back(freqList[i].second); 
        }

        return result;
    }
};

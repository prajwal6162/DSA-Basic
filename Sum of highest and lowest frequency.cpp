class Solution {
public:
    int sumHighestAndLowestFrequency(vector<int>& nums) {
        int n = nums.size();
        int highestFrequency = 0;
        int lowestFrequency = n;
        unordered_map<int, int> frequencyMap;

        for (int i = 0; i < n; i++) {
            frequencyMap[nums[i]]++;
        }

        for (auto it : frequencyMap) {
            int element = it.first;
            int frequency = it.second;

            highestFrequency = max(highestFrequency, frequency);
            lowestFrequency = min(lowestFrequency, frequency);
        }

        return highestFrequency + lowestFrequency;
    }
};
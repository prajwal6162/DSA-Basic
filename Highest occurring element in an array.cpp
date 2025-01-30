class Solution {
public:
    int mostFrequentElement(vector<int>& nums) {
        // better approach
        int maxFrequency = 0;
        int mostFrequentElement = 0;
        int n = nums.size();
        unordered_map<int, int> frequencyMap;
        
        for (int i = 0; i < n; i++) {
            frequencyMap[nums[i]]++;
        }
        
        for (auto it : frequencyMap) {
            int element = it.first;
            int frequency = it.second;

            if (frequency > maxFrequency) {
                maxFrequency = frequency;
                mostFrequentElement = element;
            } else if (frequency == maxFrequency) {
                mostFrequentElement = min(mostFrequentElement, element);
            }
        }
        return mostFrequentElement;

    }
};
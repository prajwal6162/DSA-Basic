class Solution {
public:
    int secondMostFrequentElement(vector<int>& nums) {
        int n = nums.size();
        int secFreq = 0;
        int firstFreq = 0;
        int ele1 = -1;
        int ele2 = -1;

        unordered_map<int, int> freqMap;
        for (int i = 0; i < n; i++) {
            freqMap[nums[i]]++;
        }
        for (auto it : freqMap) {
            int ele = it.first;
            int freq = it.second;

            if (freq > firstFreq) {
                secFreq = firstFreq;
                ele2 = ele1;
                firstFreq = freq;
                ele1 = ele;
            } else if (freq == firstFreq) {
                ele1 = min(ele1, ele);
            } else if (freq > secFreq) {
                secFreq = freq;
                ele2 = ele;
            } else if (freq == secFreq) {
                ele2 = min(ele2, ele);
            }
        }
        return ele2;
    }
};
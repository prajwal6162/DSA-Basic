class Solution {
    public:
        bool anagramStrings(string& s, string t) {
            int n = s.size();
            if (n != t.size()) return false;
            
            char freq1[26] = {0}, freq2[26] = {0};
            
            for (int i = 0; i < n; i++) {
                freq1[s[i] - 'a']++;
                freq2[t[i] - 'a']++;
            }
            
            for (int i = 0; i < 26; i++) {
                if (freq1[i] != freq2[i])
                    return false;
            }
            return true;
        }
};




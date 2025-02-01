class Solution{    
    public:
        string longestCommonPrefix(vector<string>& str){
            if(str.empty()) return "";
            int n = str.size();
            sort(str.begin(), str.end());
            string first = str[0];
            string last = str[n-1];

            int minlenght = min(first.size(), last.size());
            string ans = "";
            for(int i = 0; i < minlenght; i++){
                if(first[i] != last[i]){
                    return ans;
                }
                ans += first[i];
            }
            return ans;

        }
};
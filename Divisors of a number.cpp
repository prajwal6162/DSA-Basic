class Solution {
public:
    vector<int> divisors(int n) {
        vector<int> ans;
        for(int i=1; i<=n; i++) {  // Line 5: Add space for consistency around operators
            if(n % i == 0) {         // Line 6: Add space for consistency around operators
                ans.push_back(i);
            }
        }
        return ans;
    }
};

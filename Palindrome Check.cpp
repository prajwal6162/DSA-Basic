
class Solution{    
    public:        
        bool palindromeCheck(string& s){
            int n = s.size();
            int left = 0;
            int right = n - 1;
            while (left < right) {
                if (s[left] == s[right]) {
                    left++, right--;
                } else {
                    return false;
                }
            }
            return true;
        }
};

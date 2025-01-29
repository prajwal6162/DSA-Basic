class Solution {
    private:
    int reverseNumber(int x){
        int sum = 0;
        while(x > 0){
            int lastDigit = x % 10;
            sum = sum * 10 + lastDigit;
            x = x / 10;
        }
        return sum;
    }

public:
    bool isPalindrome(int n) {
        if(n == 0) return true;
        int ans = reverseNumber(n);
        return n == ans;
    }
};
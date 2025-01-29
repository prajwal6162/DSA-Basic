class Solution {
public:
    int reverseNumber(int n) {
        if (n == 0) return 0;
        int sum = 0;
        while (n > 0) {
            int lastDigit = n % 10;
            sum = sum * 10 + lastDigit;
            n = n / 10;
        }
        return sum;
    }
};
class Solution {
public:
    int countOddDigit(int n) {
        if (n == 0) return 0;
        int odd = 0;
        while (n > 0) {
            int lastDigit = n % 10;
            if (lastDigit % 2 != 0) {
                odd++;
            }
            n = n / 10;
        }
        return odd;
    }
};
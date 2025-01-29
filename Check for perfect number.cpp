class Solution {
public:
    bool isPerfect(int n) {
        int sum = 0;
        if (n == 1) return false;
        for (int i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                sum = sum + i;

                if (n / i != n && i != n / i) {
                    sum = sum + (n / i);
                }
            }
        }
        if (n == sum) return true;
        else return false;
    }
};
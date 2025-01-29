class Solution {
public:
    int LCM(int n1, int n2) {
        if (n1 == n2) return n1;
        int lcm;
        int maxu = max(n1, n2);
        int i = 1;
        while (1) {
            int lowest = maxu * i;
            if (lowest % n1 == 0 && lowest % n2 == 0) {
                lcm = lowest;
                break;
            }
            i++;
        }
        return lcm;
    }
};
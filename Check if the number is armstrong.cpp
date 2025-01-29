class Solution {
    private:
    int countDigits(int number) { 
            int digitCount = log10(number) + 1;
            return digitCount;
        }

    int calculateSum(int number, int power) { 
        int totalSum = 0;
        while(number > 0) {
           int lastDigit = number % 10;
            totalSum = pow(lastDigit, power) + totalSum;
            number = number / 10;
        }
        return totalSum;
    }

public:
    bool isArmstrong(int num) { 
        if(num == 0) return true;
        int copyOfNum = num; 
        int digitCount = countDigits(num); 
        int armstrongSum = calculateSum(num, digitCount); 

       if(copyOfNum == armstrongSum) return true;
       else return false;
    }
};
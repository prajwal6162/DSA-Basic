class Solution {
    private:
    bool isPrime(int x){
        int count=0;
        for(int i=1;i<=sqrt(x);i++){
            if(x%i == 0) {
                count++;

                if(x%i !=i){
                    count++;
                }
            }
        }
    if(count==2) return true;
    else return false;
    }
public:
    int primeUptoN(int n) {
        int count=0;
        for(int i=2;i<=n;i++){
            if(isPrime(i)) count++;
        }
         return count;
    }
};

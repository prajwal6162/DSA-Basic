class Solution{
    public:
        int addDigits(int num){
            return func(num);
        }
        private:
            int func(int n){
                if(n<10) return n;
                int sum=0;
                while(n>0){
                    int z=n%10;
                    sum=sum+z;
                    n=n/10;
                }
               return func(sum);
            }
    };
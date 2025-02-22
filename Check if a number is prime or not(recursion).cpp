class Solution{	
	public:
		bool checkPrime(int num){
			return recur(2, num);
		}

    private:
        bool recur(int i, int num){
            if(i>=num) return true;
            if(num % i == 0) return false;
            return recur(i+1, num);
        }

};
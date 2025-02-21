class Solution{	
	public:		
		bool palindromeCheck(string& s){
			return ispalin(s,0,s.size()-1);
		}
	private:
		bool ispalin(string& s, int left, int right){
			if(left>=right) {return true;}

			if(s[left]!=s[right])
			{return false;}

			return ispalin(s, left+1, right-1);
		}

};
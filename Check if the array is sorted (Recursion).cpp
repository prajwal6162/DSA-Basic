class Solution{	
	public:
		bool isSorted(vector<int>& nums){
            if(nums.size() <= 1) return true;

            return check(nums, 0, 1);
		}

    private:
        bool check(vector<int>& nums, int left, int right){
            if(right >= nums.size()) return true;
            if(nums[left]>nums[right]) return false;
            return check(nums, left+1, right+1);
        }

};
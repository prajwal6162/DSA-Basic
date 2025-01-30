class Solution{
public:
    void reverse(int arr[], int n){
      int left=0;
      int right=n-1;
      while(left<right){
        swap(arr[right], arr[left]);
        left++;
        right--;
      }
    }
};

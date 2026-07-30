class Solution {
  public:
    bool binarySearch(vector<int>& arr, int k) {
        // code here
        int low=0,high=arr.size();
        while(low<=high){
            int mid = low+(high-low)/2;
            if(arr[mid]==k) return true;
            else if(arr[mid]>k) high=mid-1;
            else low=mid+1;
        }
        return false;
    }
};
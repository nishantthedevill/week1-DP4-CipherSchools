class Solution {
public:
int First(vector<int>nums,int n, int target){
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(target>nums[mid])
            start = mid+1;
        else if(target<nums[mid])
            end = mid-1;
        else{
            if(mid==0 || nums[mid-1]!=nums[mid])
            return mid;
            else
            end = mid-1;
        }    
    }
    return -1;
}
int Last(vector<int>nums,int n, int target){
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(target>nums[mid])
            start = mid+1;
        else if(target<nums[mid])
            end = mid-1;
        else{
            if(mid==n-1 || nums[mid+1]!=nums[mid])
            return mid;
            else
            start = mid+1;
        }    
    }
    return -1;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans(2);
        int n = nums.size();
        ans[0]=First(nums,n, target);
        ans[1]=Last(nums,n, target);
        return ans;
        
    }
};

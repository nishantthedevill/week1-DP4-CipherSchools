class Solution {
public:
    
    int partition(vector<int>& nums, int low, int high)
    {
        int pivot = nums[high];
        int partitionIndex = low;
        int temp;
        
        for(int i = low; i < high; i++)
        {
            if(nums[i] <= pivot)
            {
                temp = nums[i];
                nums[i] = nums[partitionIndex];
                nums[partitionIndex] = temp;
                
                partitionIndex++;
            }
        }
        
        temp = nums[high];
        nums[high] = nums[partitionIndex];
        nums[partitionIndex] = temp;
        
        return partitionIndex;
    }
    
	
    void quickSort(vector<int>& nums, int low, int high)
    {
        if(low < high)
        {
			
            int partitionIndex = partition(nums, low, high);
			
		
            quickSort(nums, low, partitionIndex-1);
            quickSort(nums, partitionIndex+1, high);
        }
    }
    
    vector<int> sortArray(vector<int>& nums) {
        
        int low = 0, high = nums.size()-1;
		
		
        quickSort(nums, low, high);
        
        return nums;
    }
};

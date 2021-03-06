class Solution(object):
    def searchInsert(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
       
        if target<=nums[0]:
            return 0
            
        for i in range(1, len(nums)):
            if target==nums[i]:
                return i
            elif target<nums[i] and target>nums[i-1]:
                return i
                
        
        return len(nums)
        
        
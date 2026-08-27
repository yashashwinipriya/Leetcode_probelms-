class Solution:
    def removeDuplicates(self, nums: list[int]) -> int:
        # If the array has 2 or fewer elements, it's already valid
        if len(nums) <= 2:
            return len(nums)
        
        # 'i' is the writer pointer, starting at index 2
        i = 2
        
        # 'j' is the reader pointer, scanning from index 2 to the end
        for j in range(2, len(nums)):
            # Check if the current element is different from the one two places back
            if nums[j] != nums[i - 2]:
                nums[i] = nums[j]
                i += 1
                
        return i
#Leetcode 2294 - Partition Array Such That Maximum Difference Is K
#https://leetcode.com/problems/partition-array-such-that-maximum-difference-is-k/description/?envType=daily-question&envId=2025-06-19

class Solution:
    def partitionArray(self, nums: List[int], k: int) -> int:
        #initialization
        count = 0
        n = len(nums)
        i = 0
        #sort
        nums.sort()
        #traversing
        while i<n:
            start = nums[i]
            i+=1
            while i<n and nums[i]-start <= k:
                i+=1
            count+=1
        return count
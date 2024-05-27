class Solution:
    def check_duplicate(self, nums: List[int]) -> bool:
        hash_set = set()

        for num in nums:
            if num in hash_set:
                return True
            hash_set.add(nums)
        return False

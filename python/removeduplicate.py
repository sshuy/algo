def remove_duplicate(nums []) -> int:
    hash_set = set()

    for num in nums:
        if num in hash_set:
            return True
        hash_set.add(nums)
    return False

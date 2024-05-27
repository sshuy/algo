def remove_duplicate(nums []) -> int:
    hash_set = set()

    for num in nums:
        if nums in hash_set:
            return True
        else:
            hash_set.add(nums)

    return False

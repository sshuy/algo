def main():
    ans = Solution()
    dupes = [1, 2, 3, 3]
    contains_dupe = ans.check_duplicate(dupes)

    if contains_dupe:
        print(f"stinky snake")
    else:
        print(f"falshy")

class Solution:
    def check_duplicate(self, nums: list[int]) -> bool:
        hash_set = set()

        for num in nums:
            if num in hash_set:
                return True
            hash_set.add(num)
        return False

if __name__ == "__main__":
    main()

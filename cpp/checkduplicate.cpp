#include <iostream>
#include <unordered_set>
#include <vector>

bool CheckDuplicates(std::vector<int> nums)
{
	std::unordered_set<int> hash_set{};
	int i = 0;
	while (i < nums.size())
	{
		if(auto iter = hash_set.find(nums[i]); iter != hash_set.end())
		{
			return true;
		}
		hash_set.insert(nums[i]);
		++i;
	}
	std::cout << "falshy\n";
	return false;
}

int main()
{
	std::vector<int> dupenums{1, 1, 2, 2, 3 ,3}; // prints 'stinky dupe'
	std::vector<int> nums{1, 2, 3}; // prints 'falshy'
	bool dupeFound = CheckDuplicates(nums);
	if (dupeFound)
	{
		std::cout << "stinky dupe\n";
	}
	else 
	{
		std::cout << "falshy\n";
	}
	return 0;
}

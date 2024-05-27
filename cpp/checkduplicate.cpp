#include <format>
#include <iostream>
#include <unordered_set>
#include <vector>

bool CheckDuplicates(std::vector<int> nums)
{
	std::unordered_set<int> hash_set{};
	for(int i = 0; i < nums.size(); ++i)
	{
		if(auto iter = hash_set.find(nums[i]); iter != hash_set.end())
		{
			return true;
		}
		hash_set.insert(nums[i]);
	}
	return false;
}

int main()
{
	std::vector<int> dupenums{1, 1, 2, 2, 3 ,3}; // prints 'stinky dupe'
	std::vector<int> nums{1, 2, 3}; // prints 'falshy'
	bool dupeFound = CheckDuplicates(dupenums);
	if (dupeFound)
	{
		std::cout << "stinky dupe\n";
		// std::format("stinky dupe\n");
	}
	else 
	{
		std::cout << "falshy\n";
		// std::format("falshy\n");
	}
	return 0;
}

function CheckDuplicates(nums)
	local hash_set = {}
	for _, number in ipairs(nums) do
		if hash_set[number] then
			return true
		end
		hash_set[number] = {}
	end
	return false
end

local dupes = { 1, 1, 2, 3 }
local years = { 2011, 2012, 1990 }
local containsDupe = CheckDuplicates(dupes)

if containsDupe then
	print("stinky butt")
else
	print("falshy")
end

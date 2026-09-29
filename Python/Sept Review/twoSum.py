# hashmap looks up keys fast (so what info you have should be the key, and the info you want should be value)
# for ex: num -> index

# seen = {}          # empty dict
# seen[key] = value  # insert or update
# key in seen        # O(1) check whether a key exists
# seen[key]          # get the value (raises an error if the key is missing)




from typing import List

class Solution: 
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        seen = {}

        for i, num in enumerate(nums): # for every index + num in nums
            comp = target - num # comp is target - num
            if comp in seen:   # if comp exists in seen
                return [i, seen[comp]] # return curr index, index of comp

            seen[num] = i # fill seen map with num -> index
                
        

if __name__ == "__main__":
    s = Solution()
    nums = [5, 3, 2, 8]
    
    print(s.twoSum(nums, 7))

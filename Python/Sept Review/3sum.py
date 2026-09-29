# 3Sum: given an integer array nums, return all triplets [nums[i], nums[j], nums[k]] where:

# i, j and k are three different indices, and
# nums[i] + nums[j] + nums[k] == 0.

# The answer must not contain duplicate triplets. The order of the output and the order within each triplet don't matter.

# Examples:
# nums = [-1, 0, 1, 2, -1, -4] → [[-1, -1, 2], [-1, 0, 1]]
# nums = [0, 1, 1] → []
# nums = [0, 0, 0] → [[0, 0, 0]]

"""
notes:
sorted array helps; sorting is O(n log n)
skip duplicates by comparing values at i == i + 1
use first occurence and skip the repeats
"""



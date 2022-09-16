class Solution:
    def maximumGap(self, nums: List[int]) -> int:
        def counting_sort(nums, place):
            count = [[] for _ in range(10)]
            for num in nums:
                numstring = str(num)
                if len(numstring) <= place:
                    count[0].append(num)
                else:
                    digit = numstring[-1 - place]
                    count[int(digit)].append(num)

            output = []
            for bucket in count: output.extend(bucket)
            return output

        max_places = len(str(max(nums)))
        for i in range(max_places):
            nums = counting_sort(nums, i)

        largest = 0
        for i in range(1, len(nums)):
            largest = max(largest, nums[i] - nums[i - 1])
        return largest

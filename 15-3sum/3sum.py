class Solution(object):
    def threeSum(self, nums):
        l = []
        nums.sort()
        for i in range(len(nums)-2):
            if i > 0 and nums[i] == nums[i-1]:
                continue
            s = i + 1
            e = len(nums)-1
            while s < e:
                t = nums[i] + nums[s] + nums[e]
                if t == 0:
                    l.append([nums[i], nums[s], nums[e]])
                    s += 1
                    e -= 1
                    while s < e and nums[s] == nums[s-1]:
                        s += 1
                elif t < 0:
                    s += 1
                else:
                    e -= 1

        return l
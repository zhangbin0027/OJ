from collections import Counter

class Solution(object):
    """
    两个数组的交集 II
    """
    def intersect(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        nums1 = Counter(nums1)
        nums2 = Counter(nums2)
        num = nums1 & nums2
        print(num)
        return list(num.elements())

if __name__ == "__main__":
    a = Solution()
    print(a.intersect(nums1 = [4,9,5], nums2 = [9,4,9,8,4]))
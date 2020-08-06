class Solution(object):
    """
    两个数组的交集
    """
    def intersection(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        set1 = set(nums1)
        set2 = set(nums2)
        return list(set1 & set2)

if __name__ == "__main__":
    a = Solution()
    print(a.intersection(nums1 = [192,172], nums2 = [182,172]))
from collections import Counter

class Solution(object):
    """
    给定两个字符串 s 和 t ，编写一个函数来判断 t 是否是 s 的字母异位词。
    """
    def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        return Counter(s) == Counter(t)

if __name__ == "__main__":
    a = Solution()
    print(a.isAnagram(s='angular',t='anlargu'))
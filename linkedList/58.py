#!usr/bin/env python
# -*- coding:utf-8 -*-
__author__ = 'zhangbin23'
__file__ = '58.py.py'
__date__ = '2020/4/20 19:25'


class Solution(object):
    """
    对于s首先要进行的考虑是s中是否有字母存在。对于没有的情况用split（）函数将其转化为空列表在进行判断，而对于有的情况的话，split（）会自动去除s中的空格，并且将其转化为列表。最后返回列表最后一个元素的长度值。
    """

    def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """
        return len(s.strip().split()[-1]) if len(s.strip()) > 0 else 0


if __name__ == '__main__':
    a = Solution()
    ret = a.lengthOfLastWord('This is test ')
    print(ret)

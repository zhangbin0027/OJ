#!usr/bin/env python 
# -*- coding:utf-8 -*- 
__author__ = 'zhangbin23'
__file__ = '59.py.py'
__date__ = '2020/4/20 19:36'


class Solution(object):
    """
    给定一个正整数 n，生成一个包含 1 到 n2 所有元素，且元素按顺时针顺序螺旋排列的正方形矩阵。
    """
    def generateMatrix(self, n):
        """
        :type n: int
        :rtype: List[List[int]]
        """
        l, r, t, b = 0, n - 1, 0, n - 1
        mat = [[0 for _ in range(n)] for _ in range(n)]
        num, tar = 1, n * n
        while num <= tar:
            for i in range(l, r + 1):  # left to right
                mat[t][i] = num
                num += 1
            t += 1
            for i in range(t, b + 1):  # top to bottom
                mat[i][r] = num
                num += 1
            r -= 1
            for i in range(r, l - 1, -1):  # right to left
                mat[b][i] = num
                num += 1
            b -= 1
            for i in range(b, t - 1, -1):  # bottom to top
                mat[i][l] = num
                num += 1
            l += 1
        return mat

if __name__ == '__main__':
    a = Solution()
    ret = a.generateMatrix(4)
    print(ret)

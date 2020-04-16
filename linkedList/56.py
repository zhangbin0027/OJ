#!usr/bin/env python
# -*- coding:utf-8 -*-
__author__ = 'zhangbin23'
__file__ = '56.py'
__date__ = '2020/4/16 10:27'


class Solution(object):
    def merge(self, intervals):
        """
        :type intervals: List[List[int]]
        :rtype: List[List[int]]
        """
        intervals.sort(key=lambda x: x[0])
        merged = []
        for interval in intervals:
            # 若列表为空或当前区间与上一区间不重合，直接添加
            if not merged or merged[-1][-1] < interval[0]:
                merged.append(interval)
            else:
                # 否则，就可以与上一区间进行合并
                merged[-1][-1] = max(merged[-1][-1], interval[1])
        return merged


if __name__ == '__main__':
    a = Solution()
    ret = a.merge([[1, 3], [2, 6], [8, 10], [15, 18]])
    print(ret)

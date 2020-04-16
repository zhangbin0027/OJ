#!usr/bin/env python
# -*- coding:utf-8 -*-
__author__ = 'zhangbin23'
__file__ = '57.py'
__date__ = '2020/4/16 11:52'


class Solution(object):
    """
    1.在区间 newInterval 之前开始的区间全部添加到输出中。
    2.将 newInterval 添加到输出中，如果与输出中的最后一个区间重合则合并它们。
    3.然后一个个添加后续的区间，如果重合则合并它们
    """

    def insert(self, intervals, newInterval):
        """
        :type intervals: List[List[int]]
        :type newInterval: List[int]
        :rtype: List[List[int]]
        """
        # init data
        new_start, new_end = newInterval
        idx, n = 0, len(intervals)
        output = []

        # add all intervals starting before newInterval
        while idx < n and new_start > intervals[idx][0]:
            output.append(intervals[idx])
            idx += 1

        # add newInterval
        # if there is no overlap, just add the interval
        if not output or output[-1][-1] < new_start:
            output.append(newInterval)

        # if there is an overlap, merge with the last interval
        else:
            output[-1][-1] = max(output[-1][-1], new_end)

        # add next intervals, merge with newInterval if needed
        while idx < n:
            interval = intervals[idx]
            start, end = interval
            idx += 1
            if output[-1][-1] < start:
                output.append(interval)
            else:
                output[-1][-1] = max(output[-1][-1], end)
        return output


if __name__ == '__main__':
    a = Solution()
    ret = a.insert([[1, 3], [6, 9]], [2, 5])
    print(ret)

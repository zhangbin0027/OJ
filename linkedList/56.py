#!usr/bin/env python
# -*- coding:utf-8 -*-
__author__ = 'zhangbin23'
__file__ = '56.py'
__date__ = '2020/4/16 10:27'


class Solution(object):
    """
    首先，我们将列表中的区间按照左端点升序排序。然后我们将第一个区间加入 merged 数组中，并按顺序依次考虑之后的每个区间：

    如果当前区间的左端点在数组 merged 中最后一个区间的右端点之后，那么它们不会重合，我们可以直接将这个区间加入数组 merged 的末尾；

    否则，它们重合，我们需要用当前区间的右端点更新数组 merged 中最后一个区间的右端点，将其置为二者的较大值
    """

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

# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None


class Solution(object):
    def reorderList(self, head):
        """
        :type head: ListNode
        :rtype: None Do not return anything, modify head in-place instead.
        """
        if not head:
            return None
        p = head
        stack = []
        while p:
            stack.append(p)
            p = p.next
        n = len(stack)
        count = (n - 1) // 2
        p = head
        while count:
            # 弹栈
            tmp = stack.pop()
            # 与链头拼接
            tmp.next = p.next
            p.next = tmp
            # 向右移动一个
            p = tmp.next
            count -= 1
        stack.pop().next = None

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        firstN = currN = ListNode()
        while(list1 and list2):
            if list1.val < list2.val:
                currN.next = list1
                list1 = list1.next
            else:
                currN.next = list2
                list2 = list2.next
            currN = currN.next
        
        currN.next = list1 or list2
        return firstN.next



        
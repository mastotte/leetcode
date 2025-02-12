/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
 func hasCycle(head *ListNode) bool {
    slow := head;
    fast := head;

    if head == nil || head.Next == nil{
        return false;
    }

    for fast != nil && fast.Next != nil{

        slow = slow.Next;
        fast = fast.Next.Next;

        if(fast == slow){
            return true;
        }
    }

    return false;
}
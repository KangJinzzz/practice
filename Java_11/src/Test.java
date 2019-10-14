public class Test {

//        1. 编写代码，以给定值x为基准将链表分割成两部分，所有小于x的结点排在大于或等于x的结点之前
    public ListNode partition(ListNode pHead, int x) {
        if(pHead == null) {
            return null;
        }
        if(pHead.next == null) {
            return pHead;
        }
        ListNode smallHead = new ListNode(-1);
        ListNode smallTail = smallHead;
        ListNode bigHead = new ListNode(-1);
        ListNode bigTail = bigHead;
        while(pHead != null) {
            ListNode node = new ListNode(pHead.val);
            if(pHead.val < x) {
                smallTail.next = node;
                smallTail = smallTail.next;
            } else {
                bigTail.next = node;
                bigTail = bigTail.next;
            }
            pHead = pHead.next;
        }
        smallTail.next = bigHead.next;
        return smallHead.next;
    }

//        2. 在一个排序的链表中，存在重复的结点，请删除该链表中重复的结点，重复的结点不保留，返回链表头指针
    public ListNode deleteDuplication(ListNode pHead)
    {
        if(pHead == null) {
            return null;
        }
        ListNode newHead = new ListNode(-1);
        ListNode newTail = newHead;
        ListNode cur = pHead;
        while(cur != null) {
            if(cur.next != null && cur.val == cur.next.val) {
                while(cur.next != null && cur.val == cur.next.val) {
                    cur = cur.next;
                }
                cur = cur.next;
            } else {
                newTail.next = new ListNode(cur.val);
                newTail = newTail.next;
                cur = cur.next;
            }
        }
        return newHead.next;
    }
//        3. 判定链表的回文结构
    public boolean chkPalindrome(ListNode A) {
        if(A == null) {
            return true;
        }
        ListNode fast = A;
        ListNode slow = A;
        while(fast != null && fast.next != null) {
            fast = fast.next.next;
            slow = slow.next;
        }
        ListNode B = slow;
        ListNode prev = null;
        ListNode next = B.next;
        while(next != null) {
            B.next = prev;
            prev = B;
            B = next;
            next = next.next;
        }
        B.next = prev;
        while(B != null && A != null) {
            if(A.val != B.val){
                return false;
            }
            A = A.next;
            B = B.next;
        }
        return true;
    }
//        4. 输入两个链表，找出它们的第一个公共结点
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        int lenA = size(headA);
        int lenB = size(headB);
        int steps = lenA - lenB;
        if(steps > 0) {
            while(steps > 0) {
                headA = headA.next;
                steps--;
            }
        } else {
            while(steps < 0) {
                headB = headB.next;
                steps++;
            }
        }
        while(headA != null && headB != null) {
            if(headA == headB) {
                return headA;
            }
            headA = headA.next;
            headB = headB.next;
        }
        return null;
    }
    public int size(ListNode head) {
        int count = 0;
        for(; head != null; head = head.next) {
            count++;
        }
        return count;
    }
//        5. 给定一个链表，判断链表中是否有环
    public boolean hasCycle(ListNode head) {
        if(head == null) {
            return false;
        }
        ListNode fast = head;
        ListNode slow = head;
        while(fast != null && fast.next != null) {
            fast = fast.next.next;
            slow = slow.next;
            if(fast == slow) {
                return true;
            }
        }
        return false;
    }
//        6. 给定一个链表，返回链表开始入环的第一个节点。 如果链表无环，则返回 null
    public ListNode detectCycle(ListNode head) {
        if(head == null) {
            return null;
        }
        ListNode fast = head;
        ListNode slow = head;
        while(fast != null && fast.next != null) {
            fast = fast.next.next;
            slow = slow.next;
            if(fast == slow) {
                break;
            }
        }
        if(fast == null || fast.next == null) {
            return null;
        }
        ListNode cur = fast;
        while(cur != head) {
            cur = cur.next;
            head = head.next;
        }
        return cur;
    }
}

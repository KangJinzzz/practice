public class Test {
    public static void main(String[] args) {

    }
    //        1. 删除链表中指定的所有元素
    public ListNode removeElements(ListNode head, int val) {
        //链表为空时
        if(head == null) {
            return null;
        }
        //链表不为空，最后处理头结点
        ListNode prev = head;
        ListNode node = head.next;
        while(node != null) {
            if(node.val == val) {
                prev.next = node.next;
                node = prev.next;
            }else {
                prev = node;
                node = prev.next;
            }
        }
        if(head.val == val) {
            head = head.next;
        }
        return head;
    }
//        2. 反转一个单链表
    public ListNode reverseList(ListNode head) {
        if(head == null) {
            return null;
        }
        ListNode prev = null;
        ListNode node = head;
        ListNode next = head.next;
        while(next != null) {
            node.next = prev;
            prev = node;
            node = next;
            next = next.next;
        }
        node.next = prev;
        return node;
    }
//        3. 给定一个带有头结点 head 的非空单链表，返回链表的中间结点。
    public ListNode middleNode(ListNode head) {
        ListNode fast = head;
        ListNode slow = fast;
        while(fast != null && fast.next != null) {
            slow = slow.next;
            fast = fast.next.next;
        }
        return slow;
    }
//        4. 输入一个链表，输出该链表中倒数第k个结点
    public ListNode FindKthToTail(ListNode head,int k) {
        int len = size(head);
        if(k <= 0 || k > len || head == null) {
            return null;
        }
        ListNode node = head;
        for(int i = 0; i <  len - k; i++) {
            node = node.next;
        }
        return node;
    }
        public int size(ListNode head) {
            int sz = 0;
            ListNode node = head;
            while (node != null) {
                sz++;
                node = node.next;
            }
            return sz;
    }
//        5. 将两个有序链表合并为一个新的有序链表并返回
    public ListNode mergeTwoLists(ListNode l1, ListNode l2) {
        ListNode head = new ListNode(0);
        ListNode tail = head;
        while(l1 != null && l2 != null) {
            if(l1.val < l2.val) {
                tail.next = l1;
                l1 = l1.next;
            }else {
                tail.next = l2;
                l2 = l2.next;
            }
            tail = tail.next;
        }
        if(l1 == null) {
            tail.next = l2;
            return head.next;
        }
        tail.next = l1;
        return head.next;
    }

}

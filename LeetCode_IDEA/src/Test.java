import java.util.Scanner;

public class Test {
    public static void main(String[] args) {
        String str = "1.1.1.1";
        System.out.println(defangIPaddr(str));

    }

    //给你一个有效的 IPv4 地址 address，返回这个 IP 地址的无效化版本。
    //所谓无效化 IP 地址，其实就是用 "[.]" 代替了每个 "."。
    //示例 1：
    //输入：address = "1.1.1.1"
    //输出："1[.]1[.]1[.]1"
    public  static String defangIPaddr(String address) {
        //return address.replace(".", "[.]");
        String s;
        StringBuilder bulider = new StringBuilder();
        for(int i = 0; i < address.length(); i++) {
            if(address.charAt(i) == '.') {
                bulider.append("[.]");
            }else {
                bulider.append(address.charAt(i));
            }
        }
        s = bulider.toString();
        return s;
    }

//    给定一个二进制矩阵 A，我们想先水平翻转图像，然后反转图像并返回结果。
//    水平翻转图片就是将图片的每一行都进行翻转，即逆序。例如，水平翻转 [1, 1, 0] 的结果是 [0, 1, 1]。
//    反转图片的意思是图片中的 0 全部被 1 替换， 1 全部被 0 替换。例如，反转 [0, 1, 1] 的结果是 [1, 0, 0]。
//    示例 1:
//    输入: [[1,1,0],[1,0,1],[0,0,0]]
//    输出: [[1,0,0],[0,1,0],[1,1,1]]
//    解释: 首先翻转每一行: [[0,1,1],[1,0,1],[0,0,0]]；
//    然后反转图片: [[1,0,0],[0,1,0],[1,1,1]]
    public int[][] flipAndInvertImage(int[][] A) {
        int Col = A[0].length;
        for(int i = 0; i < A.length; i++) {
            for(int j = 0; j < (Col + 1) / 2; j++){
                A[i][j] ^= 1;
                if(j != (Col - 1 - j)) {
                    A[i][Col - j - 1] ^= 1;
                }
                int t = A[i][j] ;
                A[i][j] = A[i][Col - j - 1] ;
                A[i][Col - j - 1] = t;
            }
        }
        return A;
    }
//    203.删除链表中等于给定值 val 的所有节点。
//    示例:
//    输入: 1->2->6->3->4->5->6, val = 6
//    输出: 1->2->3->4->5
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

//    206.反转一个单链表。
//    示例:
//    输入: 1->2->3->4->5->NULL
//    输出: 5->4->3->2->1->NULL
//    进阶:
//    你可以迭代或递归地反转链表。你能否用两种方法解决这道题？
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

//    876.给定一个带有头结点 head 的非空单链表，返回链表的中间结点。
//    如果有两个中间结点，则返回第二个中间结点。
//    示例 1：
//    输入：[1,2,3,4,5]
//    输出：此列表中的结点 3 (序列化形式：[3,4,5])
//    返回的结点值为 3 。 (测评系统对该结点序列化表述是 [3,4,5])。
//    注意，我们返回了一个 ListNode 类型的对象 ans，这样：
//    ans.val = 3, ans.next.val = 4, ans.next.next.val = 5, 以及 ans.next.next.next = NULL.
    public ListNode middleNode(ListNode head) {
        ListNode fast = head;
        ListNode slow = fast;
        while(fast != null && fast.next != null) {
            slow = slow.next;
            fast = fast.next.next;
        }
        return slow;
    }

    //输入一个链表，输出该链表中倒数第k个结点。
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
        while(node != null ) {
            sz++;
            node = node.next;
        }
        return sz;
    }

    //    21.将两个有序链表合并为一个新的有序链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。 
//    示例：
//    输入：1->2->4, 1->3->4
//    输出：1->1->2->3->4->4

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

//    编写代码，以给定值x为基准将链表分割成两部分，所有小于x的结点排在大于或等于x的结点之前
    //    给定一个链表的头指针 ListNode* pHead，请返回重新排列后的链表的头指针。注意：分割以后保持原来的数据顺序不变
    public ListNode partition(ListNode pHead, int x) {
        //链表为空
        if(pHead == null) {
            return null;
        }
        //只有一个结点
        if(pHead.next == null) {
            return pHead;
        }
        //链表有多个结点
        //创建两个新链表，一个存储比x大的，一个存比x小的
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
        //连接两个链表
        smallTail.next = bigHead.next;
        return smallHead.next;
    }

//    在一个排序的链表中，存在重复的结点，请删除该链表中重复的结点，重复的结点不保留，返回链表头指针。
//    例如，链表1->2->3->3->4->4->5 处理后为 1->2->5
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


//    对于一个链表，请设计一个时间复杂度为O(n),额外空间复杂度为O(1)的算法，判断其是否为回文结构。
//
//    测试样例：
//            1->2->2->1
//    返回：true
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
//    编写一个程序，找到两个单链表相交的起始节点。
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

//    小A 和 小B 在玩猜数字。小B 每次从 1, 2, 3 中随机选择一个，小A 每次也从 1, 2, 3 中选择一个猜。他们一共进行三次这个游戏，请返回 小A 猜对了几次？
//    输入的guess数组为 小A 每次的猜测，answer数组为 小B 每次的选择。guess和answer的长度都等于3。
//    示例 1：
//    输入：guess = [1,2,3], answer = [1,2,3]
//    输出：3
//    解释：小A 每次都猜对了。
    public int game(int[] guess, int[] answer) {
        int count = 0;
        for(int i = 0; i < 3; i++) {
            if(guess[i] == answer[i]) {
                count++;
            }
        }
        return count;
    }

//    两个整数之间的汉明距离指的是这两个数字对应二进制位不同的位置的数目。
//    给出两个整数 x 和 y，计算它们之间的汉明距离。
//    注意：
//            0 ≤ x, y < 231.
//    示例:
//    输入: x = 1, y = 4
//    输出: 2
//    解释:
//            1   (0 0 0 1)
//            4   (0 1 0 0)
//            ↑   ↑
//    上面的箭头指出了对应二进制位不同的位置。
    public int hammingDistance(int x, int y) {
        int count = 0;
        for(int i = 0; i < 32; i++) {
            if(((x >> i) & 1) != ((y >> i) & 1)) {
                count++;
            }
        }
        return count;
    }

//    在二维平面上，有一个机器人从原点 (0, 0) 开始。给出它的移动顺序，判断这个机器人在完成移动后是否在 (0, 0) 处结束。
//    移动顺序由字符串表示。字符 move[i] 表示其第 i 次移动。机器人的有效动作有 R（右），L（左），U（上）和 D（下）。如果机器人在完成所有动作后返回原点，
//    则返回 true。否则，返回 false。
//    注意：机器人“面朝”的方向无关紧要。 “R” 将始终使机器人向右移动一次，“L” 将始终向左移动等。此外，假设每次移动机器人的移动幅度相同。
//    示例 1:
//    输入: "UD"
//    输出: true
//    解释：机器人向上移动一次，然后向下移动一次。所有动作都具有相同的幅度，因此它最终回到它开始的原点。因此，我们返回 true。
    public boolean judgeCircle(String moves) {
        int row = 0;
        int col = 0;
        for(int i = 0; i < moves.length(); i++) {
            if(moves.charAt(i) == 'R') {
                row++;
            }
            if(moves.charAt(i) == 'L') {
                row--;
            }
            if(moves.charAt(i) == 'U') {
                col++;
            }
            if(moves.charAt(i) == 'D') {
                col--;
            }
        }
        if(row == 0 && col == 0) {
            return true;
        }
        return false;
    }

//    学校在拍年度纪念照时，一般要求学生按照 非递减 的高度顺序排列。
//    请你返回至少有多少个学生没有站在正确位置数量。该人数指的是：能让所有学生以 非递减 高度排列的必要移动人数。
//    示例：
//    输入：[1,1,4,2,1,3]
//    输出：3
//    解释：
//    高度为 4、3 和最后一个 1 的学生，没有站在正确的位置。
//    提示：
//            1 <= heights.length <= 100
//            1 <= heights[i] <= 100
    public int heightChecker(int[] heights) {
        int[] arr = new int[101];
        int count = 0;
        for(int i = 0; i < heights.length; i++) {
            arr[heights[i]]++;
        }

        for(int i = 1, j = 0; i <= 100; i++) {
            while(arr[i]-- > 0) {
                if(i != heights[j++]) {
                    count++;
                }
            }
        }
        return count;
    }

//    给定一个按非递减顺序排序的整数数组 A，返回每个数字的平方组成的新数组，要求也按非递减顺序排序。
//    示例 1：
//    输入：[-4,-1,0,3,10]
//    输出：[0,1,9,16,100]
    public int[] sortedSquares(int[] A) {
        int left = 0;
        int right = A.length - 1;
        int index = right;
        int[] arr = new int[A.length];
        while(left <= right) {
            if(A[left] * A[left] > A[right] * A[right]) {
                arr[index--] = A[left] * A[left];
                left++;
            } else {
                arr[index--] = A[right] * A[right];
                right--;
            }
        }
        return arr;
    }

//    给定一个链表，判断链表中是否有环。
//    为了表示给定链表中的环，我们使用整数 pos 来表示链表尾连接到链表中的位置（索引从 0 开始）。 如果 pos 是 -1，则在该链表中没有环。
//    示例 1：
//    输入：head = [3,2,0,-4], pos = 1
//    输出：true
//    解释：链表中有一个环，其尾部连接到第二个节点。
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

//    给定一个链表，返回链表开始入环的第一个节点。 如果链表无环，则返回 null。
//    为了表示给定链表中的环，我们使用整数 pos 来表示链表尾连接到链表中的位置（索引从 0 开始）。 如果 pos 是 -1，则在该链表中没有环。
//    说明：不允许修改给定的链表。
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

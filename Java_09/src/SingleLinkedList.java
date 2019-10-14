//import com.sun.org.apache.bcel.internal.generic.LNEG;
//import sun.awt.image.ImageWatched;
//
//import java.util.concurrent.LinkedBlockingDeque;

class LinkedNode {
    public int data = 0;
    public LinkedNode next = null;

    public LinkedNode(int data) {
        this.data = data;
    }
}

public class SingleLinkedList {
    LinkedNode head = null;

    //头插
    public void addFrist(int data) {
        LinkedNode node = new LinkedNode(data);
        //链表为空时
            if(head == null) {
            head = node;
        }
        //链表不为空
        else {
            node.next = head;
            head = node;
        }
    }

    //尾插法
    public void addLast(int data) {
        LinkedNode node = new LinkedNode(data);
        //链表为空时
        if(head == null) {
            head = node;
        }
        //链表不为空时
        else {
            LinkedNode cur = head;
            while(cur.next != null) {
                cur = cur.next;
            }
            cur.next = node;
        }
    }
    //按任意位置插入
    public void addIndex(int index, int data) {
        int len = this.size();
        //越界访问
        if(index < 0 || index > len) {
            return;
        }
        //在头结点插入
        if(index == 0) {
            this.addFrist(data);
        }
        //在尾结点插入
        else if(index == len) {
            this.addLast(data);
        }
        //在中间任意位置插入
        else {
            LinkedNode prev = this.preNodeIndex(index - 1);
            LinkedNode node = new LinkedNode(data);
            node.next = prev.next;
            prev.next = node;
        }
    }

    //检查元素key是否在链表中
    public boolean contains(int key) {
        LinkedNode node = head;
        while(node != null) {
            if(node.data == key) {
                return true;
            }
            node = node.next;
        }
        return false;
    }

    //删除第一次出现关键字key的结点
    public void remove(int key) {
        if(head == null) {
            return;
        }
        //key在头结点
        if(head.data == key) {
            head = head.next;
        }
        //key是中间结点或尾结点
        else {
            LinkedNode prev = this.perNodeData(key);
            LinkedNode node = prev.next;
            prev.next = node.next;
        }

    }

    //删除所有data为key的结点
    public void removeAllKey(int key) {
        //链表为空直接返回
        if(head == null) {
            return;
        }
        //链表不为空，头结点最后处理，先处理后面的结点
       LinkedNode prev = this.head;
       LinkedNode toRemove = prev.next;
       while(toRemove != null) {
           if(toRemove.data == key) {
               prev.next = toRemove.next;
               toRemove = prev.next;
           }else {
               prev = toRemove;
               toRemove = toRemove.next;
           }
       }
       //头结点为空
       if(head.data == key) {
           head = head.next;
       }
    }

    //返回data为key的前一个结点
    private LinkedNode perNodeData(int key) {
        LinkedNode node = head;
        while(node != null) {
            if(node.next.data == key) {
                return node;
            }
            node = node.next;
        }
        //node没找到
        return null;
    }
    //返回下标为index结点
    private LinkedNode preNodeIndex(int index) {
        LinkedNode node = head;
        for(int i = 0; i < index; i++) {
            node = node.next;
        }
        return node;
    }
    //求链表的长度
    public int size() {
        int size = 0;
        for(LinkedNode node = head; node != null; node = node.next) {
            size++;
        }
        return size;
    }

    //清空链表
    public void clear() {
        head = null;
    }
    //打印链表
    public void display() {
        System.out.print("[");
        for(LinkedNode node = head; node != null; node = node.next) {
            System.out.print(node.data);
            if(node.next != null) {
                System.out.print(", ");
            }
        }
        System.out.println("]");
    }


}

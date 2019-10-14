public class Test {
    public static void main(String[] args) {
        //testAddFrist();
        //testAddLast();
        //testAddIndex();
        //testContains();
        //testRemove();
        testRemoveAllKey();

    }

    //测试头插
    public static void testAddFrist() {
        SingleLinkedList list = new SingleLinkedList();
        list.addFrist(1);
        list.addFrist(2);
        list.addFrist(3);
        list.addFrist(4);
        list.addFrist(5);
        list.display();
    }
    //测试尾插
    public static void testAddLast() {
        SingleLinkedList list = new SingleLinkedList();
        list.addLast(1);
        list.addLast(2);
        list.addLast(3);
        list.addLast(4);
        list.addLast(5);
        list.display();
    }
    //测试任意位置插入
    public static void testAddIndex() {
        SingleLinkedList list = new SingleLinkedList();
        list.addIndex(0,1);
        list.addIndex(1,2);
        list.addIndex(2,3);
        list.addIndex(3,4);
        list.addIndex(4,5);
        list.addIndex(5,6);
        list.display();
    }
    //测试contains
    public static void testContains() {
        SingleLinkedList list = new SingleLinkedList();
        list.addIndex(0,1);
        list.addIndex(1,2);
        list.addIndex(2,3);
        list.addIndex(3,4);
        list.addIndex(4,5);
        list.addIndex(5,6);
        System.out.println(list.contains(6));
    }
    //测试remove
    public static void testRemove() {
        SingleLinkedList list = new SingleLinkedList();
        list.addIndex(0,1);
        list.addIndex(1,2);
        list.addIndex(2,3);
        list.addIndex(3,4);
        list.addIndex(4,5);
        list.addIndex(5,6);
        list.remove(2);
        list.display();
    }
    //测试removeAllKey
    public static void testRemoveAllKey() {
        SingleLinkedList list = new SingleLinkedList();
        list.addIndex(0,1);
        list.addIndex(1,1);
        list.addIndex(2,1);
        list.addIndex(3,4);
        list.addIndex(4,5);
        list.addIndex(5,6);
        list.removeAllKey(1);
        list.display();
    }

}

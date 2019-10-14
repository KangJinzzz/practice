public class Tset {
    public static void main(String[] args) {
        SeqList list = new SeqList();
        list.add(0, 1);
        list.add(1, 2);
        list.add(2, 3);
        list.add(3, 4);
        list.add(4, 5);

        list.display();
        System.out.println(list.contains(4));
        System.out.println(list.search(4));
        System.out.println(list.getPos(5));
        list.setPos(3, 99);
        System.out.println(list.getSize());
        list.remove(99);
        System.out.println(list.getSize());
        list.display();
        list.clear();
        System.out.println(list.getSize());
        list.display();

    }
}

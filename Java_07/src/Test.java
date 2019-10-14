

//- 编写一个类Calculator,有两个属性num1,num2,这两个数据的值，不能在定义的同时初始化，最后实现加减乘除四种运算.
//        - 设计一个包含多个构造函数的类，并分别用这些构造函数来进行实例化对象。
//        - 实现交换两个变量的值。要求：需要交换实参的值。
public class Test {
    public static void main(String[] args) {
        Calculator nu1 = new Calculator(7, 2);
        Calculator nu2 = new Calculator(5, 10);
        Calculator nu3 = new Calculator(99);
        nu1.disPaly();
        nu2.disPaly();
        nu3.disPaly();
        nu1.swap();
        nu1.disPaly();
        System.out.println(nu1.div());
        System.out.println(nu1.add());
        System.out.println(nu2.sub());
        System.out.println(nu2.mul());
    }
}

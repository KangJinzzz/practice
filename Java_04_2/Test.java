

public class Test {
    public static void main(String[] args) {
        // 1. 实现代码: 求斐波那契数列的第 N 项
        // int ret = fib(6);
        // System.out.println(ret);

        // 2. 实现代码: 求解汉诺塔问题(提示, 使用递归)
        // 汉诺塔问题是一个经典的问题。汉诺塔（Hanoi Tower），又称河内塔，源于印度一个古老传说。
        // 大梵天创造世界的时候做了三根金刚石柱子，在一根柱子上从下往上按照大小顺序摞着64片黄金圆盘。
        // 大梵天命令婆罗门把圆盘从下面开始按大小顺序重新摆放在另一根柱子上。
        // 并且规定，任何时候，在小圆盘上都不能放大圆盘，且在三根柱子之间一次只能移动一个圆盘。
        // 问应该如何操作？
        //hanoiTower(3, 'A', 'B', 'C');
        // 3. 实现代码: 青蛙跳台阶问题(提示, 使用递归)
        // 一只青蛙一次可以跳上 1 级台阶，也可以跳上2 级。求该青蛙跳上一个n 级的台阶总共有多少种跳法
        int ret = jumpStep(5);
        System.out.println(ret);
    }

    public static int fib(int num) {
        if(num == 1 || num == 2) {
            return 1;
        }
        return fib(num - 1) + fib(num - 2);
    }

    //打印每一步
    public static void Move(char pos1, char pos2) {
        System.out.print(pos1 + "->" + pos2 + " ");
    }
    // pos1(第一个参数)：起始位置
    // pos2(第二个参数)：中间位置
    // pos3(第三个参数)：目标位置
    public static void hanoiTower(int n, char pos1, char pos2, char pos3) {
        if(n == 1) {
            Move(pos1, pos3);
            return;
        }else {
            //将上面n-1个圆盘通过第三个柱子移到第二个柱子上
            hanoiTower(n - 1, pos1, pos3, pos2);
            //将最大的圆盘移到目标(第三个)柱子上
            Move(pos1, pos3);
            //将前n-1个圆盘从第二个柱子上通过第一个柱子移到第三个柱子上
            hanoiTower(n - 1, pos2, pos1, pos3);
        }
    }

    public static int jumpStep(int n) {
        if(n == 1) {
            return 1;
        }if(n == 2) {
            return 2;
        }
        return jumpStep(n - 1) + jumpStep(n - 2);
    }


}
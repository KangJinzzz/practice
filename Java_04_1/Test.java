public class Test {
    public static void main(String[] args) {
        // 2. 实现代码: 递归求 N 的阶乘
        // int ret = jieCheng(5);
        // System.out.println(ret);
        // 3. 实现代码: 递归求 1 + 2 + 3 + ... + 10
        // int ret = add(10);
        // System.out.println(ret);
        // 4. 实现代码: 按顺序打印一个数字的每一位(例如 1234 打印出 1 2 3 4)
        // print(1234);
        // 5. 实现代码: 写一个递归方法，输入一个非负整数，返回组成它的数字之和.
        int ret = sum(12345);
        System.out.println(ret);

    }
    public static int jieCheng(int num) {
        if(num <= 1)
        {
            return 1;
        }
        return num * jieCheng(num - 1);
    }

    public static int add(int num) {
        if(num <= 1) {
            return 1;
        }
        return num + add(num - 1);
    }

    public static void print(int num) {
        // if(num > 9)
        // {
        //     print(num / 10);
        // }
        // System.out.println(num % 10);
        if(num <= 9) {
            System.out.println(num);
            return;
        }
        print(num / 10);
        System.out.println(num % 10);
    }

    public static int sum(int num) {
        if(num <= 9) {
            return num;
        }
        return num % 10 + sum(num / 10);
    }



}
import java.util.Random;
import java.util.Scanner;
public class Test{
     public static void main(String[] args) {
//         1. 编写程序数一下 1到 100 的所有整数中出现多少个数字9。
        // int i = 0;
        // int count = 0;
        // for(i = 1; i <= 100; i++) {
        //     if(i % 10 == 9) {
        //         count++;
        //     }
        //     if((i / 10) % 10 == 9) {
        //         count++;
        //     }
        // }
        // System.out.println(count);
//         2. 求出0～999之间的所有“水仙花数”并输出。(“水仙花数”是指一个三位数，其各位数字的立方和确好等于该数本身，如；153＝1＋5＋3?    ，则153是一个“水仙花数”。)
            // int i = 0;
            // for(i = 0; i <= 999; i++) {
            //     if(Math.pow((i % 10),3) + Math.pow(i / 10 % 10, 3) + Math.pow(i /10 / 10 %10, 3 ) == i) {
            //         System.out.println(i);
            //     }
            // }

//         3. 编写代码模拟三次密码输入的场景。
//         最多能输入三次密码，密码正确，提示“登录成功”,密码错误，
//         可以重新输入，最多输入三次。三次均错，则提示退出程序
                // String key = "kjw123";
                
                // Scanner sc = new Scanner(System.in);

                // for(int i = 0; i < 3; i++) {
                //     System.out.println("请输入密码：");
                //     String possword = sc.nextLine();
                //     if(possword.compareTo(key) == 0) {
                //         System.out.println("密码正确！");
                //         return ;
                //     }
                // }
                // System.out.println("退出程序！");
                //sc.close();
//         4. 写一个函数返回参数二进制中 1 的个数
//         比如： 15 0000 1111 4 个 1
            // int num = 7;
            // int ret = countNum(127);
            // System.out.println(ret);

//         5. 获取一个数二进制序列中所有的偶数位和奇数位，
//         分别输出二进制序列。
            // int num = 127;
            // getBit(num);
            
//         6. 输出一个整数的每一位.
            // int num = 127;
            // print(num);
            
//         7. 完成猜数字游戏
            Scanner sc = new Scanner(System.in);
            Random ran = new Random();
            int key = ran.nextInt(99) + 1;
            while(true) {
                System.out.println("请输入要猜的数字：");
                int num = sc.nextInt();
                if(num > key) {
                    System.out.println("猜大了");
                }else if(key > num) {
                    System.out.println("猜小了");
                }else {
                    System.out.println("猜对了");
                    break;
                }
            }
            sc.close();
 
    }

    public static int countNum(int num) {
        int count = 0;
        int i = 0;
        for(i = 0; i < 32; i++) {
            if(((num >> i) & 1) == 1) {
                count++;
            }
        }
        return count;
    }
    public static void getBit(int num) {
        int i = 0;
        int j = 0;
        int[] a = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        int[] b = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        for(i = 0, j = 0; i < 32; i++)  {
            if(i % 2 == 0) {
                a[j] = ((num >> i) & 1);
            }else {
                b[j] = ((num >> i) & 1);
                j++;
            }
        }
        System.out.println("奇数位： ");
        for(i = 15; i>=0; i--) {
            System.out.print(a[i]);
        }
        System.out.println();

        System.out.println("偶数位： ");
        for(i = 15; i>= 0; i--) {
            System.out.print(b[i]);
        }
        System.out.println();

    }    
    public static void print(int num) {
        int i = 0; 
        for(i = 0; i < 32; i++) {
            System.out.print((num >> i) & 1);
        }
    }
}
import java.util.Scanner;


public  class Test{
    public static void main(String[] args){
        // 1. 根据年龄, 来打印出当前年龄的人是少年(低于18), 青年(19-28), 中年(29-55), 老年(56以上)
     
        // System.out.println("请输入年龄：");
        // Scanner sc = new Scanner(System.in);
        // int age = sc.nextInt();
        // if(age <= 18){
        //     System.out.println("少年");
        // }else if(age >=19 && age <= 28){
        //     System.out.println("青年");
        // }else if(age >=29 && age <= 55){
        //     System.out.println("中年");
        // }else if(age >= 56){
        //     System.out.println("老年");
        // }
        // sc.close();
    
        // 2. 判定一个数字是否是素数
        // Scanner sc = new Scanner(System.in);
        // System.out.println("输入数字：");
        // int num = sc.nextInt();
        // int i = 0;
        // int flag = 1;
        // for(i = 2; i <= Math.sqrt(num); i++){
        //     if(num % i == 0){
        //         flag = 0;
        //         break;
        //     }
        // }
        // if(flag ==  0) {
        //     System.out.println("不是素数");
        // }else {
        //     System.out.println("是素数");
        // }
        // sc.close();
        
        // 3. 打印 1 - 100 之间所有的素数
        // int i = 0;
        // int j = 0;
        // for(i = 1; i <= 100; i++) {
        //     int flag=1;
        //     for(j = 2; j <= Math.sqrt(i); j++) {
        //         if(i % j == 0) {
        //             flag = 0;
        //             break;
        //         }
        //     }
        //     if(flag == 1) {
        //         System.out.print(i+" ");
        //     }
        // }



        // 4. 输出 1000 - 2000 之间所有的闰年
        // int i = 0;
        // for(i = 1000; i <= 2000; i++) {
        //     if(i % 100 != 0) {
        //         if(i % 4 == 0) {
        //             System.out.print(i+" ");
        //         }
        //     }else {
        //         if(i % 400 == 0) {
        //             System.out.print(i+" ");
        //         }
        //     }
        // }

        // 5. 输出乘法口诀表
        // int i = 0;
        // int j = 0;
        // for(i = 1; i <= 9; i++) {
        //     for(j = 1; j <=i; j++) {
        //         System.out.print(i + "*" + j + "=" + i*j + " ");
        //     }
        //     System.out.println();
        // }

        // 6. 求两个正整数的最大公约数
        // Scanner sc = new Scanner(System.in);
        // int a = sc.nextInt();
        // int b = sc.nextInt();
        // sc.close();
        // int i = 0;
        // for(i = 2; i < a && i < b; i++) {
        //     if(a % i == 0 && b % i == 0) {
        //         System.out.println(i);
        //     }
        // }

        // 7. 计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值。
        // int i = 0;
        // double sum = 0;
        // for(i = 1; i <=100; i++) {
        //     sum += Math.pow(-1, i + 1)/i;
        // }
        // System.out.println(sum);
    }
}
public class Calculator {

    private int num1;
    private int num2;

    //构造函数
    public Calculator(int num1, int num2) {
        this.num1 = num1;
        this.num2 = num2;
    }
    public Calculator(int num1) {
        this.num1 = num1;
    }


    public void disPaly() {
        System.out.println("num1 = " + this.num1);
        System.out.println("num2 = " + this.num2);
    }
    //加法
    public int add() {
        return this.num1 + this.num2;
    }
    //减法
    public int sub() {
        return this.num1 - this.num2;
    }
    //乘法
    public int mul() {
        return this.num1 * this.num2;
    }
    //除法
    public double div() {
        return (double)this.num1 / (double)this.num2;
    }
    //交换
    public void swap() {
        int tmp = this.num1;
        this.num1 = this.num2;
        this.num2 = tmp;
    }


}

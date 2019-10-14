
public class SeqList {
    private int[] data = new int[5];
    private int size = 0;

    //打印
    public  void display() {
        System.out.print("[");
        for(int i = 0; i < this.size; i++) {
            if(i != this.size - 1) {
                System.out.print(this.data[i] + ", ");
            }else {
                System.out.print(this.data[i]);
            }
        }
        System.out.println("]");
    }

    //在pos位置增加元素
    public void add(int pos, int data) {
        if(pos < 0 || pos > size) {
            return;
        }
        if(size == this.data.length)
        {
            remalloc();
        }
        if(pos == this.size ) {
            this.data[pos] = data;
            this.size++;
        }else {

            for(int i = this.size - 1; i >= pos; i-- ) {
                this.data[i +1] = this.data[i];
            }
            this.data[pos] = data;
            this.size++;
        }
    }
    //扩容
    private void remalloc() {
        int[] arr = new int[this.data.length * 2];
        for(int i = 0; i < this.size ; i++) {
            arr[i] = this.data[i];
        }
        this.data = arr;
    }
    //判断是否包含某个元素
    public boolean contains(int toFind) {
        for(int i = 0; i < this.size; i++) {
            if(toFind == this.data[i]) {
                return true;
            }
        }
        return false;
    }
    //查找某个元素对应的位置
    public int search(int toFind) {
        for(int i = 0; i < this.size; i++) {
            if(toFind == this.data[i]) {
                return i;
            }
        }
        return -1;
    }
    //获取pos位置元素
    public int getPos(int pos) {
        if(pos < 0 || pos > size - 1) {
            return;
        }
        if(pos < this.size && pos >= 0) {
            return this.data[pos];
        }
        return -1;
    }
    //将pos位置的数置为value
    public void setPos(int pos, int value) {
        if(pos < this.size && pos >= 0) {
            this.data[pos] = value;
        }
    }
    //删除第一次出现的reMove的值
    public void remove(int reMove) {
        int pos = search(reMove);
        if(pos == size - 1) {
            size--;
        }else {
            for(int i = pos; i < size - 1; i++) {
                data[i] = data[i + 1];
            }
            size--;
        }
    }
    //获取长度
    public int getSize() {
        return this.size;
    }
    //清空顺序表
    public void clear() {
        size = 0;
    }



}

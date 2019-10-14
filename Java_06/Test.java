import java.util.Arrays;

public class Test {
    public static void main(String[] args) {
        int[] arr = {0, 2, 1, 4, 9, 6, 7, 8, 3, 5};
        swap(arr);
        System.out.println(Arrays.toString(arr));
        // int[] arr2 = Arrays.copyOf(arr, arr.length);
        // System.out.println(Arrays.toString(arr2));
        // String str = myToString(arr);
        // System.out.println(str);
        // print(arr);
        // int[] arr2 = new int[] {1,2,3};
        // print(arr);
        // int[] a = transform(arr);
        // print(a);
        // System.out.println("length = " + arr.length);
        // for(int x : arr) {
        //     System.out.println(x);
        // }
    }

    public static int[] transform(int[] arr) {
        for(int i = 0; i < arr.length; i++) {
            arr[i] *= 2;
        }
        return arr;
    }

    public static int[] transform2(int[] arr) {
        int[] a = new int[arr.length];
        for(int i = 0; i < arr.length; i++) {
            a[i] = arr[i] * 2;
        }
        return a;
    }

    public static void print(int[] arr) {
        for(int x : arr) {
            System.out.println(x);
        }
    }

    public static String myToString(int[] arr) {
        String ret = "[";
        for(int i = 0; i < arr.length; i++) {
            if(i != arr.length - 1) {
                ret += arr[i] + ", ";
            }else {
                ret += arr[i];
            }
        }
        ret += "]";
        return ret;
    }

    public static int binaryFind(int[] arr,int key) {
        int left = 0;
        int right = arr.length - 1;
        while(left <= right) {
            int mid = (left + right)/2;
            if(arr[mid] < key) {
                left = mid + 1;
            }if(arr[mid] > key) {
                right = mid - 1;
            }if(arr[mid] == key) {
                return mid;
            }
        }
        return -1;
    }

    public static void bubbleSort(int[] arr) {
        for(int i = 0; i < arr.length - 1; i++) {
            int j = 0;
            for(j = 0; j < arr.length - i - 1; j++) {
                if(arr[j] > arr[j + 1]) {
                    int tmp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = tmp;
                }
            }
        }
    }

    public static void swap(int[] arr) {
        int left = 0;
        int right = arr.length - 1;
        while(left < right) {
            while(left < right && arr[left] % 2 == 0) {
                left++;
            }
            while(left < right && arr[right] % 2 == 1) {
                right--;
            }
            int tmp = arr[left];
            arr[left] = arr[right];
            arr[right] = tmp;
        }
    }
}
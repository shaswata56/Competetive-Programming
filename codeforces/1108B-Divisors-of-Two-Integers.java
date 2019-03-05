import java.util.Scanner;
import java.util.Arrays;

public class Main {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int arr[], n = 0, arr_y[], j[], m = 0;
        int test = input.nextInt();
        arr = new int[test + 10];
        arr_y = new int[1000000];
        j = new int[1000000];
        while (test != 0) {
            arr[test - 1] = input.nextInt();
            test--;
        }
        int max_x = Arrays.stream(arr).max().getAsInt();
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] != 0) {
                if (arr[i] == max_x)
                    n++;
                if (max_x % arr[i] == 0){
                    if(arr[i] < max_x && arr[i] != 1)
                        arr_y[arr[i]] += 1;
                    arr[i] = 1;
                }
            }
        }
        int max_y = Arrays.stream(arr).max().getAsInt();
        int max_arr_y = Arrays.stream(arr_y).max().getAsInt();
        for(int i = 0; i < 100000; i++)
            if(arr_y[i] == max_arr_y){
                j[m++] = i;
            }
        if(max_y == 1 && max_arr_y > 1){
            int max_j = Arrays.stream(j).max().getAsInt();
            max_y = max_j;
        }
        if(n == 2)
            max_y = max_x;
        System.out.println(max_x + " " + max_y);
    }
}

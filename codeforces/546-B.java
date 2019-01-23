import java.util.Scanner;
import java.util.Arrays;
public class Main {
  static Scanner input = new Scanner(System.in);
  static int n, incr=0;
  static int t = input.nextInt();
  static int[] arr = new int[t];
  public static void main(String[] args) {
    for(int i=0; i<t; i++)
    {
      arr[i] = input.nextInt();
      n=i;
    }
    Arrays.sort(arr);
    for(int i=0; i<n; i++)
    {
      for(int j=i+1; j<=n; j++)
      {
        if(arr[i] == arr[j])
        {
          arr[j]++;
          incr++;
        }
      }
    }
    System.out.println(incr);
  }
}

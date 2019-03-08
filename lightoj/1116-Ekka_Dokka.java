import java.math.BigInteger;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        for(int i = 0; i < t; i++) {
            BigInteger W = input.nextBigInteger();
            BigInteger one = BigInteger.ONE;
            BigInteger N = BigInteger.ZERO;
            BigInteger M = BigInteger.ZERO;
            while(W.divide(one).multiply(one).equals(W)) {
                N = W.divide(one);
                M = one;
                one = one.shiftLeft(1);
            }
            int n = i + 1;
            if(M.longValue() == 1)
            {
                System.out.println("Case "+ n +": Impossible");
            } else {
                System.out.println("Case "+ n +": "+ N +" "+ M);
            }
        }
    }
}

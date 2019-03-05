import java.util.Scanner;
import java.math.BigInteger;

public class Main {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int test = input.nextInt();
        BigInteger n = BigInteger.valueOf(1);
        for(long i = 0; i < test; i++){
            BigInteger ki = input.nextBigInteger();
            BigInteger xi = input.nextBigInteger();
            if(ki.equals(n))
                System.out.println(xi);
            else System.out.println(xi.add(ki.subtract(BigInteger.valueOf(1)).multiply(BigInteger.valueOf(9))));
        }
    }
}

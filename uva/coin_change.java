import	java.util.Scanner;

public class coin_change {
	public static void main(String[] args) {
		int i, j;
		int arr[] = new int[7500];
		for(i = 0; i < 5; i++)
			arr[i] = 1;
		int coins[] = {5,10,25,50};
		for(i = 5; i < 7500; i++)
			arr[i] = arr[i - 1];
		for(i = 0; i < 4; i++)
			for(j = coins[i]; j < 7500; j++)
				arr[j] += arr[j - coins[i]];
		Scanner	input = new Scanner(System.in);
		while (input.hasNextInt()) {
 			int cents = input.nextInt();
			System.out.printf("%d\n", arr[cents]);
		}
	}
}

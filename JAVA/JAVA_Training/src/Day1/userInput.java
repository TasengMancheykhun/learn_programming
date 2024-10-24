package Day1;
import java.util.Scanner;
public class userInput {

	public static void main(String[] args) {
		Scanner sc =  new Scanner(System.in);
		int a= sc.nextInt();
		float f = sc.nextFloat();
		char c = sc.next().charAt(0);
		
		System.out.println(a);
		System.out.println(f);
		System.out.println(c);
		sc.close();
	}

}

package Day1;
import java.util.Scanner;
public class swapNumbers {

	public static void main(String[] args) {
		int a,b;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter First No : \n");
		a=sc.nextInt();		
		System.out.println("Enter Second No : \n");
		b= sc.nextInt();
		
		a=a+b;
		b=a-b;
		a=a-b;
		System.out.println(" __________VALUES AFTER SWAPPING THE NUMBER_________ ");
		System.out.println(" First No : "+a);
		System.out.println(" Second No : "+b);
		
		
	}

}

package Day1;
import java.util.Scanner;

public class FourFunCal {

	public static void main(String[] args) {
		int a,b,sum,sub,mul,div;
		Scanner sc = new Scanner (System.in);
		
		System.out.println("Enter First No : \n");
		a=sc.nextInt();		
		System.out.println("Enter Second No : \n");
		b= sc.nextInt();
		sum=a+b;
		sub=a-b;
		mul=a*b;
		div=a/b;
		
		System.out.println("Addition : "+sum);
		System.out.println("SUbstraction : "+sub);
		System.out.println("Multiplication : "+mul);
		System.out.println("Division : "+div);

	}

}

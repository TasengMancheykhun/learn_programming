package Day1;

import java.util.Scanner;

public class ternaryOprator {

	public static void main(String[] args) {
	
//		int a,b,c;
//		Scanner sc = new Scanner(System.in);
//		System.out.println("Enter First No : ");
//		a=sc.nextInt();		
//		System.out.println("Enter Second No : ");
//		b= sc.nextInt();
//		c = a>b?a:b;
//		System.out.println("Maximum no : "+c);
		int a,b;
		String s;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter First No : ");
		a=sc.nextInt();		
		System.out.println("Enter Second No : ");
		b= sc.nextInt();
		s = a>b?(a+" is greter than "+b):(b+" is greater than "+a);
		System.out.println(s);
	}

}

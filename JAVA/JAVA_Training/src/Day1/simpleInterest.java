package Day1;
import java.util.Scanner;

public class simpleInterest {

	public static void main(String[] args) {
	int principle,rate,time,simpleInterest;
	Scanner sc = new Scanner(System.in);
	System.out.println("Enter Principle Amount : ");
	principle=sc.nextInt();	
	System.out.println("Enter Interest Rate  : ");
	rate=sc.nextInt();	
	System.out.println("Enter total time : ");
	time=sc.nextInt();	
     simpleInterest = principle*rate*time/100;
 	System.out.println("Simple Interest : "+simpleInterest);
     
	}

}

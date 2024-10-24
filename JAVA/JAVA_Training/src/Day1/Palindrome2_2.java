package Day1;
import java.util.Scanner;

public class Palindrome2_2 {

	public static void main(String[] args) {
		int num, rem, sum;
		
		Scanner sc=new Scanner(System.in);
        System.out.println("Enter a number: ");
        num = sc.nextInt();
        int num1=num;
        sum=0;
        rem=0;
        
        while(num>0)
        {
        	rem=num%10;
        	num=num/10;
        	sum=(sum*10)+rem;
        }
        
        if (num1==sum)
            System.out.println("Number "+num1+" is a Palindrome");
        else
        	System.out.println("Number "+num1+" is not a Palindrome");
        
	}
}

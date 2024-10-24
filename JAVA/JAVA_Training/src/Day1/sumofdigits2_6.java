package Day1;

import java.util.Scanner;

public class sumofdigits2_6 {

	public static void main(String[] args) {
        int num, rem=0;
        
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a number: ");
        num = sc.nextInt();
        int sum=0;
        while(num>0)
        {
        	rem=num%10;
        	num=num/10;
        	sum+=rem;
        }

        System.out.println("Sum of the digits of the number is: "+sum);
	}

}

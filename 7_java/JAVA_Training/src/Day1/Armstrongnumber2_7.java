package Day1;

import java.util.Scanner;
import java.lang.Math;

public class Armstrongnumber2_7 {

	public static void main(String[] args) {
        int num, rem=0;
        
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a number: ");
        num = sc.nextInt();
        
        int num1=num, num2=num, length=0;
        while(num>0)
        {
        	rem=num%10;
        	num=num/10;
        	length+=1;
        }
        
        System.out.println("length = "+length);
        
        int sum=0;
        while(num1>0)
        {
        	rem=num1%10;
        	num1=num1/10;
        	sum += Math.pow(rem, length);
        }
        
        
        if (sum==num2)
        	System.out.println("Number "+num2+" is an Armstrong number");
        else
        	System.out.println("Number "+num2+" is not an Armstrong number");

	}

}

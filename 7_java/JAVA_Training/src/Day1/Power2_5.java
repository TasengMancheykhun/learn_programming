package Day1;

import java.util.Scanner;

public class Power2_5 {

	public static void main(String[] args) {
		int a,b;
		
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a base number: ");
        a = sc.nextInt();        
        
        System.out.println("Enter a exponent number: ");
        b = sc.nextInt();
        int b1=b;
        
        int pw=1;
        
        while(b>0)
        {
        	pw*=a;
        	b-=1;
        }

        System.out.println("Power of "+a+"^"+b1+" is: "+pw);
        
	}

}

package Day1;
import java.util.Scanner;

public class Evenodd2_3 {

	public static void main(String[] args) {
        int num, rem;
        
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a number: ");
        num = sc.nextInt();
        int ce=0,co=0;
        rem=0;
        
        while(num>0)
        {
        	rem=num%10;
        	if (rem%2==0)
        		ce+=1;
        	else
        		co+=1;
        	
        	num=num/10;
        }
        
        System.out.println("No. of Even numbers are: "+ce);
        System.out.println("No. of Odd numbers are: "+co);
        
	}

}

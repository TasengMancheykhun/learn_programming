package Day1;

import java.util.Scanner;

public class pattern2_8 {

	public static void main(String[] args) {
        int num, rem=0;
        
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a number: ");
        num = sc.nextInt();
        
        int count=1;
        while(num>0)
        {
        	int i=0;
        	while(i<count)
        	{
        	    System.out.print(count);
        	    i+=1;
        	}
        	count+=1;
        	System.out.println(" ");
        	num-=1;
        }
        
	}

}
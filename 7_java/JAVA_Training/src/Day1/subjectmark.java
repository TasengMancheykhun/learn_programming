package Day1;

import java.util.Scanner;

public class subjectmark {

	public static void main(String[] args) {
		int m1,m2,m3,total;
		double percentage;
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter marks of Subject 1:");
		m1=sc.nextInt();
		
		System.out.println("Enter marks of Subject 2:");
		m2=sc.nextInt();
		
		System.out.println("Enter marks of Subject 3:");
		m3=sc.nextInt();
		
		total = m1+m2+m3;
		percentage = ((float)total/(float)300)*100;
		
		System.out.println("The total marks obtained is: "+total);
		System.out.println("The Percentage obtained is: "+percentage);

	}

}

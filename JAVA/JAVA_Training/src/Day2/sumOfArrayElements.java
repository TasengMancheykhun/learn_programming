package Day2;

import java.util.Scanner;

public class sumOfArrayElements {

	public static void main(String[] args) {
		int a[] = new int [5];
		int sum=0;
		Scanner sc =new Scanner(System.in);
		for (int i=0 ; i<5;i++ ) {
			System.out.print("Enter the element : ");
			a[i]=sc.nextInt();
		}
		System.out.println("Given Array Is : ");
		for(int i:a) {
			System.out.print(i+"\t");
		}
		
		for ( int i :a) {
			sum=sum+i;
			
		}
		System.out.println("\nSum of Array Elements : "+sum);
		

	}

}

package Day2;
import java.util.Arrays;
import java.util.Scanner;

public class sortArrayUsingClass {

	public static void main(String[] args) {
		
		int a[] = new int [5];
		Scanner sc =new Scanner(System.in);
		
		for (int i=0 ; i<5;i++ ) {
			System.out.print("Enter element of Array 'a' in position "+i+" :");
			a[i]=sc.nextInt();
		}
		
		
		// Sort the Array
		Arrays.sort(a);
		System.out.println("Sorted array is: "+Arrays.toString(a));
		
		//Compare 2 Arrays
		for (int i=0 ; i<5;i++ ) {
			System.out.print("Enter element of Array 'b' in position "+i+" :");
			a[i]=sc.nextInt();
		}
		
		
		
		
		
	}

}

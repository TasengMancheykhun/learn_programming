package Day2;

import java.util.Scanner;

public class reverseArray {

	public static void main(String[] args) {
		int a[] = new int [5];
		Scanner sc =new Scanner(System.in);
		for (int i=0 ; i<5;i++ ) {
			System.out.print("Enter the element : ");
			a[i]=sc.nextInt();
		}
		int length =5;
		   for (int left = 0, right = length - 1; left < right; left += 1, right -= 1)
		    {
		        int temporary = a[left];
		        a[left] = a[right];
		        a[right] = temporary;
		    }
		
		for ( int i :a) {
			System.out.print(i+"\n");
		}
		
	}

}

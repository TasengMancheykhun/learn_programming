package Day2;
import java.util.Scanner;
public class arraySort{

	public static void main(String[] args) {
		int a[] = new int [5];
		Scanner sc =new Scanner(System.in);
		for (int i=0 ; i<5;i++ ) {
			System.out.print("Enter the element : ");
			a[i]=sc.nextInt();
		}
		System.out.println("Given Array Is : ");
		for(int i:a) {
			System.out.print(i+"\t");
		}
		
		for (int i=0;i<5;i++) {
			for (int j = i+1;j<5;j++) {
				if(a[i]>a[j]){
					int temp=a[i];
					a[i]=a[j];
					a[j]=temp;
			}
			}
			}
		System.out.println("Sorted Array Is : ");
		for(int j:a) {
			System.out.print(j+"\t");
		}
	}

}

package Day1;
import java.util.Scanner;
public class rectangle {

	public static void main(String[] args) {
		int length, breadth, area, perimeter;
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter length:");
		length=sc.nextInt();
		
		System.out.println("Enter breadth:");
		breadth=sc.nextInt();
		
		area = length*breadth;
		perimeter = length+breadth;
     
		System.out.println("RESULTS");
		System.out.println("Perimeter of the Rectangle is: "+perimeter);
		System.out.println("Area of the Rectangle is: "+area);
	}

}

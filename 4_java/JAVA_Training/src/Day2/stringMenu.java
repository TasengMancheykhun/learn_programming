package Day2;
import java.util.Scanner;


public class stringMenu {

	public static void main(String[] args) {
		String s1,s2;
		int choice=0;
		Scanner sc = new Scanner(System.in);
		do {
			System.out.println("______MENU_______");
			System.out.println("1. Find Length ");
			System.out.println("2. Concatenate Strings ");
			System.out.println("3. Trim");
			System.out.println("4. Compare");
			System.out.println("5. Replace");
			System.out.print("Enter your choice : ");
			choice=sc.nextInt();
		
		switch(choice) {
		
		case 1 :
			System.out.println("Enter the string : ");
			s1=sc.next();
			System.out.println("Length of the string : "+s1.length());
			break;
		case 2 :
			System.out.println("Enter the string : ");
			s1=sc.next();
			System.out.println("Enter the string : ");
			s2=sc.next();
			System.out.println("Concatenated string : "+s1.concat(s2));
			break;
		case 3 :
			System.out.println("Enter the string : ");
			s1=sc.next();
			System.out.println("Afte trim string : "+s1.trim());
			break;
		case 4 :
			System.out.println("Enter first string : ");
			s1=sc.next();
			System.out.println("Enter second string : ");
			s2=sc.next();
			System.out.println("Comared string, with case-sensitive: "+s1.equals(s2));
			System.out.println("Comared string, Ignore case-sensitive: "+s1.equalsIgnoreCase(s2));
			break;
		case 5 :
			System.out.println("Enter first string : ");
			s1=sc.next();
			System.out.println("Enter string : ");
			s2=sc.next();
			//System.out.println("After replacing string : "+s1.replace(0, 0));
			break;
		default :
			System.out.println("Invalid Choice ");
		
		}
		}while(choice!=4);
		sc.close();
	}

}
package Day1;
import java.util.Scanner;

public class grade {

	public static void main(String[] args) {
    char grade='X';
    int mark;
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter marks of student");
    mark=sc.nextInt();
    
    if (mark >= 80) 
    	grade = 'A';
    else if (mark >= 70 & mark <80)
        grade = 'B';
    else if (mark >= 60 & mark <70)
    	grade = 'C';
    else if (mark >= 50 & mark <60)
    	grade = 'D';
    else if (mark < 50)
    	grade = 'F';
    else
    	System.out.println("Enter valid marks");

    System.out.println("The Grade of the student is: "+grade); 
    
	}

}

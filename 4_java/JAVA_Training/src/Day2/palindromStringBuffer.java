package Day2;

public class palindromStringBuffer {

	public static void main(String[] args) {
		
		String s1 = "madam";
		//StringBuffer s1 = "madam"; //new StringBuffer("madam");
		StringBuffer s2 = new StringBuffer(s1);
		
		
		 
		String s3 = s2.reverse();
		
		System.out.println(s3);		
		
//		if (s2.equals(s1))
//		    System.out.println(s1+" is a Palindrome.");
//		else
//		    System.out.println(s1+" is not a Palindrome.");		
	}

}

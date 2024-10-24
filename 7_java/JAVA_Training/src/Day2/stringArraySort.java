package Day2;

public class stringArraySort {

	public static void main(String[] args) {
		String s1[]= {"Pune","Mumbai","Delhi","Kanpur","Alhabad"};
		int i,j,n;
		String t;
		for(i=0;i<4;i++) {
			for(j=i+1;j<5;j++) {
				n= s1[i].compareTo(s1[j]);
				if(n>0) {
					t =s1[i];
					s1[i]=s1[j];
					s1[j]=t;
					
				}
			}
			
		}
		
	for(i =0;i<5;i++) {
		System.out.println(s1[i]);
		
	}
	
	}

}

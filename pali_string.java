import java.util.Scanner;

public class pali_string {

	public static void main(String args[]) {
		System.out.println("Enter any String:");
		Scanner in = new Scanner(System.in);
		String str = in.nextLine();
		boolean palindrome=true;
		int i = 0, j = str.length();
		while ( i < j ) {
			if(str.charAt(i)!=str.charAt(j-1))
				palindrome=false;
			i++;
			j--;
		}
		if(palindrome)
			System.out.println("It is a Palindrome Number");
		else
			System.out.println("It is not Palindrome Number");
	}
}

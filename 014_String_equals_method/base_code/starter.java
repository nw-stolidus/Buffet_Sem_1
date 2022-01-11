import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
	Scanner sc = new Scanner(System.in);
	System.out.println("Do you want to be a rogue, warrior, or wizard?");  
	String input = sc.nextLine();
	System.out.println("So you want to be a "+input);
	boolean z = (input.equals("wizard"));
	if(z)
	{
		System.out.println("You chose correctly");
	}
	else
	{
		System.out.println("You chose wrong");
	}
	
	}
}

import java.util.Scanner;

class starter {
	public static void main(String args[]) {
	Scanner sc = new Scanner(System.in);
	System.out.println("Enter your first number");
	int z = sc.nextInt();
	System.out.println("Enter your second number");
	int y = sc.nextInt();
	boolean x = (z!=y);
	if(x)
	{
	System.out.println("These are not the same");	
	}
	boolean w = (z==y);
	if(w)
	{
	System.out.println("These are equivalent");	
	}
	
	}
}

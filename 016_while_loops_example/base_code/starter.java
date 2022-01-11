import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
	Scanner sc = new Scanner(System.in);
	Random rand = new Random();
	System.out.println("What is your name?");
	String name = sc.nextLine();
	System.out.println("How many times should it be printed?");
	int num = sc.nextInt();
	int nump2 = ((num - num)+ 1);
	while(true)
	{
	System.out.println(name);
	if(nump2 >= num)
	{
		break;
	}
	nump2 = nump2 + 1;
}		
	
	}
}

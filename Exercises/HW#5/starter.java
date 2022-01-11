import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
	Scanner sc = new Scanner(System.in);
	System.out.println("Welcome to Slots. Would you like to play? Enter yes or no");
	String response = sc.nextLine();
	boolean z = (response.equals("yes"));
	boolean y = (response.equals("no"));
	boolean x = (!z || !y);
	if(x)
	{
		System.out.println("Please restart and enter a proper input.");
	}
	if(y)
	{
		System.out.println("We hope to see you next time!");
	}
	if(z)
	{
		System.out.println("Great lets play.");
	}
	
		int w = 100;
		while(true)
		{
			System.out.println("You have $" + w + ". How much would you like to wager?");
			int v = sc.nextInt();
			if(w <= 0)
		{
			System.out.println("You are out of money feel free to restart.");
			break;
		}
			w = w - v;
			Random rand = new Random();
			int rand_num1 = rand.nextInt(10);
			Random two = new Random();
			int two_num2 = rand.nextInt(10);
			Random three = new Random();
			int three_num3 = rand.nextInt(10);
			System.out.println("|" +rand_num1+ "|"+"|" +two_num2+ "|"+"|" +three_num3+ "|");
			if(rand_num1 == two_num2 || rand_num1 == three_num3 || two_num2 == three_num3)
			{
				w = w+(v*2);
			}
				if(rand_num1 == two_num2 && rand_num1 == three_num3)
			{
				w = w+(v*3);
			}
			
		}
	}
}

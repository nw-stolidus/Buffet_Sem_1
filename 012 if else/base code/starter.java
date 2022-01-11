import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
	Scanner sc = new Scanner(System.in);
	Random rand = new Random();
	int rand_num1 = rand.nextInt(1000)+1;
	System.out.println("Guess a number between one and 1000");
	int input = sc.nextInt();
	boolean z = (input==rand_num1);
	if(z)
	{
		System.out.println(input+" is correct.");
	}
	else
	{
		System.out.println("That is not correct. The correct answer is "+rand_num1+".");
	}


		}
}

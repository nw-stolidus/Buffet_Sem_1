import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		// Your code goes below here
	Scanner sc = new Scanner(System.in);
	Random rand = new Random();
	int secret = rand.nextInt(1000)+ 1;
	while(true)
	{
	System.out.println("Guess a number between 1 and 1000.");
	int guess = sc.nextInt();
	if(guess == secret)
	{
	break;
	}
	System.out.println("You have guessed wrong.");
	} 
System.out.println("You guessed correctly!");

		
	}
}

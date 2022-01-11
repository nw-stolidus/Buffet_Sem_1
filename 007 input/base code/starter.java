import java.util.Scanner;

class starter {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		System.out.println("You must hit enter before your response.");
		String text = sc.nextLine();
		System.out.println("What is your name?");
		System.out.println("Hello, "+sc.nextLine()+"!");
		System.out.println("How old are you?");
		System.out.println("So you're "+sc.nextLine()+"!");
		System.out.println("What month were you born in?");
		System.out.println("You were born in "+sc.nextLine()+", me too.");
		System.out.println("What day of the month were you born?");
		System.out.println("Nice, "+sc.nextLine()+" is a great number.");
		System.out.println("What year were you born?");
		System.out.println("You were born in "+sc.nextLine());
		System.out.println("If you got a buck and two quarters what do you have?");
		System.out.println("Your answer is "+sc.nextLine());
		System.out.println("$1.50 is correct.");
		
		
	}
}

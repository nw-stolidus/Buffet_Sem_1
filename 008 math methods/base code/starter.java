import java.util.Scanner;

class starter {
	public static void main(String args[]) {
	Scanner sc = new Scanner(System.in);
	System.out.println(Math.max(13-6*11, 30%7*(-2)));
	System.out.println(Math.sqrt(3*8 + 31%7));
	System.out.println(Math.pow(37/3, 35%21));
	System.out.println(Math.max(Math.pow(2,14%3), Math.sqrt(2*6)));
	System.out.println("Choose a number.");
	double x = sc.nextDouble();
	System.out.println("Now choose a different number.");
	double y = sc.nextDouble();
	System.out.println(Math.max(x, y));
	System.out.println(Math.sqrt(y));
	System.out.println(Math.pow(x, y));

	}
}

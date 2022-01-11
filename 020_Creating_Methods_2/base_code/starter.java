import java.util.Scanner;
import java.util.Random;

class starter {
	
	public static Double pow(Double x, Double y){
	Double a = x;
	Double b = y;
	Double sum = Math.pow(a, b);
	return sum;
	
	}
	
	public static void main(String args[]) {
		// Your code goes below here
	Scanner sc = new Scanner(System.in);
	System.out.println("Pick a number");
	Double x = sc.nextDouble();
	System.out.println("Pick another number");
	Double y = sc.nextDouble();
	System.out.println(pow(x,y));
	
	}
}

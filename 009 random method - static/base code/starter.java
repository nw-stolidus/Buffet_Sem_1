import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
	//Scanner sc = new Scanner(System.in);
	Random rand = new Random();
	int rand_num1 = rand.nextInt(10);
	Random two = new Random();
	int two_num2 = rand.nextInt(100)+1;
	Random three = new Random();
	double three_num3 = rand.nextDouble()+2.5;
	Random four = new Random();
	double four_num4 = rand.nextDouble()+(rand.nextInt(575)+14);
	System.out.println(rand_num1);
	System.out.println(two_num2);
	System.out.println(three_num3);
	System.out.println(four_num4);

	}
}

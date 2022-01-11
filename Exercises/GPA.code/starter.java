import java.util.Scanner;

class starter {
	public static void main(String args[]) {
	Scanner sc = new Scanner(System.in);
		System.out.println("Enter Period One");
		String PeriodOne = sc.nextLine();
		System.out.println("Enter GPA for Period 1");
		int GPAOne = sc.nextInt();
		sc.nextLine();
		System.out.println("Enter Period 2");
		String PeriodTwo = sc.nextLine();
		System.out.println("Enter GPA for Period 2");
		int GPATwo = sc.nextInt();
		sc.nextLine();
		System.out.println("Enter Period 3");
		String PeriodThree = sc.nextLine();
		System.out.println("Enter GPA for Period 3");
		int GPAThree = sc.nextInt();
		sc.nextLine();
		System.out.println(PeriodOne+" - "+GPAOne);
		System.out.println(PeriodTwo+" - "+GPATwo);
		System.out.println(PeriodThree+" - "+GPAThree);
		System.out.println("Total GPA - "+(GPAOne+GPATwo+GPAThree)/3.0);
		
	}
}

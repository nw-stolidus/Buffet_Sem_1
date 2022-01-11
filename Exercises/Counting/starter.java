import java.util.Scanner;

class starter {
	public static void main(String args[]) {
	Scanner sc = new Scanner(System.in);
	System.out.println("Pick a number");
	int pick = sc.nextInt();
	int pick2 = pick + 4;
	while(true)
	{
	System.out.println(pick);
	if(pick == pick2)
	{
	break;
	}
	pick = pick + 1;
	} 


	}
}

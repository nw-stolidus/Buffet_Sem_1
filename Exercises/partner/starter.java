import java.util.Scanner; 

class starter {
	public static void main(String args[]) {
	Scanner sc = new Scanner(System.in);
	System.out.println("Enter an integer");
	int x = sc.nextInt();
	int ans = x - 1;
	while(true)
	{
		x = x * ans;
		if(ans == 0)
		{
			break;
		}
		ans = ans - 1;
		System.out.println(x);

	}


	}
}

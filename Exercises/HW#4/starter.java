import java.util.Scanner;

class starter {
	public static void main(String args[]) {
	Scanner sc = new Scanner(System.in);
	System.out.println("Pick a number."); 
	int num_1 = sc.nextInt();
	System.out.println("Pick another number.");
	int num_2 = sc.nextInt();
	if(num_1 % 2 == 0)
	{
    System.out.println(num_1+" is even ");
    }
    else
    {
    System.out.println(num_1+" is odd ");
	}
	
	if(num_2 % 2 == 0)
	{
    System.out.println(num_2+" is even ");
    }
    else
    {
    System.out.println(num_2+" is odd ");
	}
	
	if(num_1 % 3 == 0)
	{
		System.out.println(num_1 + " can be divided by three.");
	}
	else
	{
		System.out.println(num_1 + " cannot be divided by three.");
	}
	
		if(num_1 % 4 == 0)
	{
		System.out.println(num_1 + " can be divided by four.");
	}
	else
	{
		System.out.println(num_1 + " cannot be divided by four.");
	}
	
		if(num_1 % 5 == 0)
	{
		System.out.println(num_1 + " can be divided by five.");
	}
	else
	{
		System.out.println(num_1 + " cannot be divided by five.");
	}
	
		if(num_2 % 3 == 0)
	{
		System.out.println(num_2 + " can be divided by three.");
	}
	else
	{
		System.out.println(num_2 + " cannot be divided by three.");
	}
	
		if(num_2 % 4 == 0)
	{
		System.out.println(num_2 + " can be divided by four.");
	}
	else
	{
		System.out.println(num_2 + " cannot be divided by four.");
	}
	
		if(num_2 % 5 == 0)
	{
		System.out.println(num_2 + " can be divided by five.");
	}
	else
	{
		System.out.println(num_2 + " cannot be divided by five.");
	}
	
	
	
	}
}
import java.util.Scanner;

class starter {
	public static void main(String args[]) {
	Scanner sc = new Scanner(System.in);
	System.out.println("Enter your first number");
	int z = sc.nextInt();	
	System.out.println("Enter your second number");
	int y = sc.nextInt();
	System.out.println("Enter your third number");
	int x = sc.nextInt();
	boolean w = ((y>z) && (y>x));
	if(w)
	{
	System.out.println(y+(" is the greatest number"));	
	}
	boolean v = ((x>z) && (x>y));
	if(v)
	{
	System.out.println(x+(" is the greatest number"));	
	}
	boolean u = ((z>x) && (z>y));
	if(u)
	{
	System.out.println(z+(" is the greatest number"));	
	}
	boolean t = ((z<x) && (z<y));
	if(t)
	{
	System.out.println(z+(" is the smallest number"));	
	}
	boolean s = ((x<z) && (x<y));
	if(s)
	{
	System.out.println(x+(" is the smallest number"));	
	}
	boolean r = ((y<z) && (y<x));
	if(r)
	{
	System.out.println(y+(" is the smallest number"));	
	}
		
			}
}

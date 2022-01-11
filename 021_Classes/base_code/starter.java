import java.util.Scanner;
import java.util.Random;

	class Character{
	String character = new String("Wizard");

	}
	


class starter {
	public static void main(String args[]) {
		// Your code goes below here
	Character myChar = new Character();
	System.out.println(myChar.character);
	int str = 3;
	int dex = 4;
	int intel = 9;
	int con = 5;
	int cha = 4;
	System.out.println("Your strength trait is "+ str);
	System.out.println("Your dexterity trait is "+ dex);
	System.out.println("Your intelligence trait is "+ intel);
	System.out.println("Your constitution trait is "+ con);
	System.out.println("Your charisma trait is "+ cha);
	
	
	}
}

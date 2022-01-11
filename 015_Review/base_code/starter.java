import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
	Scanner sc = new Scanner(System.in);
	System.out.println("What do you want your character's name to be?");
	String name = sc.nextLine();
	System.out.println("What is your character's title?");
	String title = sc.nextLine();
	System.out.println("Do you want to be a Warrior, a Rogue, or a Wizard?");
	String role = sc.nextLine();
	System.out.println("You have Strength(Buffness), Dexterity(Agility), Constitution(Healthy), Intelligence(Smarts), and Charisma(Personability) stats.");
	System.out.println("You have 25 points to spend on each stat. Each stat may only have up to 10 points");
	int points = 25;
	System.out.println("Strength?");
	int str = sc.nextInt();
	System.out.println(points-str+" is your amount of points left");
	System.out.println("Dexterity?");
	int dex = sc.nextInt();
	System.out.println((points-str)-dex+" is your amount of points left");
	System.out.println("Constitution?");
	int con = sc.nextInt();
	System.out.println(((points-str)-dex)-con+" is your amount of points left");
	System.out.println("Intelligence?");
	int intel = sc.nextInt();
	System.out.println((((points-str)-dex)-con)-intel+" is your amount of points left");
	System.out.println("Charisma?");
	int cha = sc.nextInt();
	System.out.println(((((points-str)-dex)-con)-intel)-cha+" is your amount of points left");
	System.out.println("Name: "+name);
	System.out.println("Title: "+title);
	System.out.println("Class: "+role);
	System.out.println("STR: "+str);
	System.out.println("DEX: "+dex);
	System.out.println("CON: "+con);
	System.out.println("INT: "+intel);
	System.out.println("CHA: "+cha);
	
	}
}

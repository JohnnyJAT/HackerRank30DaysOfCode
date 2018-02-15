import java.io.*
import java.util.*

public class Solution {
	public static void main(String[] args) {
        // Create a Scanner object to read input from stdin.
		Scanner scan = new Scanner(System.in); 
		
		// Read a full line of input from stdin and save it to our 
variable, inputString.
		String inputString = scan.nextLine(); 

		// Close the scanner object, because we've finished reading 
********* Important to avoid RESOURCE LEAK **********
        // all of the input from stdin needed for this challenge.
		scan.close(); 
      
		// Print a string literal saying "Hello, World." to stdout.
		System.out.println("Hello, World.");
      
	    System.out.print(inputString);
	}
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main() {
    // Declare a variable named 'input_string' to hold our input.
    char input_string[105]; 
    
    // Read a full line of input from stdin and save it to our variable, 
input_string.
    
    scanf("%[^\n]", input_string); 
    
    /* 
*******************************************************************************
     %s is not used because it will not read the whole input line & will take 
only thefirst word just before the first
     whitespace after that it would've dropped it.
     
    
**********************************************************************************  
*/
    
    // Print a string literal saying "Hello, World." to stdout using printf.
    printf("Hello, World.\n");
    
    printf("%s",input_string);
    
    return 0;
}

#include <stdio.h>
#include<string.h>
#include <stdlib.h>

//adds the two bit strings and return the result
char addBitStrings( char* s1, char* s2 );

// Helper method: given two unequal sized bit strings, converts them to
// same length by aadding leading 0s in the smaller string. Returns the
// the new lengthint makeEqualLength(char* s1, char* s2)
int makeEqualLength(char s1[],char s2[])
{
    int len1 = strlen(s1);
    int len2 = strlen(s2);
	//printf("len1 =%d\t",len1);
	//printf("len2 =%d\t",len2);
    if (len1 < len2)
    {
        for (int i = 0 ; i < len2 - len1 ; i++)
            s1 = '0' + s1;
	
        return len2;
	

    }
    else if (len1 > len2)
    {
        for (int i = 0 ; i < len1 - len2 ; i++)
            s2 = '0' + s2;
    }
    return len1; // If len1 >= len2
}

// The main function that adds two bit sequences and returns the addition
char addBitStrings( char first[], char second[] )
{
    char result; // To store the sum bits

    // make the lengths same before adding
    int length = makeEqualLength(first, second);

    int carry = 0; // Initialize carry

    // Add all bits one by one
    for (int i = length-1 ; i >= 0 ; i--)
    {
        int firstBit =first[i] - '0';
        int secondBit =second[i] - '0';

        // boolean expression for sum of 3 bits
        int sum = (firstBit ^ secondBit ^ carry)+'0';
	printf("Sum is %d\n", sum);

        result = (char)sum + result;

        // boolean expression for 3-bit addition
        carry = (firstBit & secondBit) | (secondBit & carry) | (firstBit & carry);
    }

    // if overflow, then add a lessSading 1
    if (carry)
        result = '1' + result;

    return result;
}

// Driver program to test above functions
int main()
{    char str1[] = "100";
     char str2[] = "100";
/*   char* str1=malloc(256);
    char* str2=malloc(256);
  printf("Enter the first string\n");
    scanf("%s",str1);
    printf("Enter the second string\n");
    scanf("%s",str2);
*/
    printf("Sum in main function is %d\n ",addBitStrings(str1, str2));
    return 0;
}




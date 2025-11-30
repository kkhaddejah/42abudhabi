/*
Assignment name  : aff_a
Expected files   : aff_a.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string, and displays the first 'a' character it
encounters in it, followed by a newline. If there are no 'a' characters in the
string, the program just writes a newline. If the number of parameters is not
1, the program displays 'a' followed by a newline.

Example:

$> ./aff_a "abc" | cat -e
a$
$> ./aff_a "dubO a POIL" | cat -e
a$
$> ./aff_a "zz sent le poney" | cat -e
$
$> ./aff_a | cat -e
a$
*/

#include <unistd.h>

int main(int argc, char *argv[]) {
	if (argc != 2)
	{
		write (1, "a", 1);
	}
	else
	{
		while (*argv[1])
		{
			if (*argv[1] == 'a')
			{
				write (1, "a", 1);
				break ;
			}
			argv[1]++;
		}
	}
	write (1, "\n", 1);
	return (0);
}

// Explanation:
// 1. The program starts by checking if the number of command-line arguments (argc)	
//    is not equal to 2. If it's not, it writes 'a' to the standard output.
// 2. If there is exactly one argument (the string to be checked), it enters a loop
//    that iterates through each character of the string.
// 3. Inside the loop, it checks if the current character is 'a'. If it finds 'a',
//    it writes 'a' to the standard output and breaks out of the loop.
// 4. After the loop (or after writing 'a' if no 'a' was found), it writes a newline
//    character to the standard output.
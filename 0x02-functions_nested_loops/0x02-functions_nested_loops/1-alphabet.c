#include <stdio.h>
/**
 * print_alphabet - prints the alphabets in lower case
 *
 * Return: void
 */
void print_alphabet(void)

{
char alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
putchar(alphabet);
}

putchar('\n');

}